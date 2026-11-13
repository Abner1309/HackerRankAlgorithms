#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

struct AhoCorasick {
    static const int K = 26;
    static const char BASE = 'a';

    struct Node {
        int go[K];
        int link = 0;
        int out = 0;
        int term = -1;
        Node() { fill(go, go + K, -1); }
    };

    vector<Node> t;
    vector<int> nodeOf;
    vector<int> order;

    AhoCorasick() : t(1) {}

    int add(const string& s) {
        int v = 0;
        for (char ch : s) {
            int c = ch - BASE;
            if (t[v].go[c] == -1) {
                t[v].go[c] = t.size();
                t.emplace_back();
            }
            v = t[v].go[c];
        }
        int id = nodeOf.size();
        if (t[v].term == -1) t[v].term = id;
        nodeOf.push_back(v);
        return id;
    }

    void build() {
        order.clear();
        for (int c = 0; c < K; c++) {
            int u = t[0].go[c];
            if (u == -1) t[0].go[c] = 0;
            else { t[u].link = 0; order.push_back(u); }
        }
        for (size_t i = 0; i < order.size(); i++) {
            int v = order[i], l = t[v].link;
            t[v].out = (t[l].term != -1) ? l : t[l].out;
            for (int c = 0; c < K; c++) {
                int u = t[v].go[c];
                if (u == -1) t[v].go[c] = t[l].go[c];
                else { t[u].link = t[l].go[c]; order.push_back(u); }
            }
        }
    }

    int step(int v, char ch) const { return t[v].go[ch - BASE]; }
};

void dnaHealth(const vector<string> &genes, const vector<int> &health, const vector<string> &numbers) {
    AhoCorasick ac;
    size_t total = 1;
    for (auto &p : genes) total += p.size();
    ac.t.reserve(total);
    for (auto &p : genes) ac.add(p);
    ac.build();

    int n = genes.size();
    vector<vector<int>> idx(n);
    vector<vector<long long>> pre(n);

    for (int i = 0; i < n; i++) {
        int k = ac.t[ac.nodeOf[i]].term;
        if (pre[k].empty()) pre[k].push_back(0);
        idx[k].push_back(i);
        pre[k].push_back(pre[k].back() + health[i]);
    }

    auto query = [&](int u, int first, int last) -> long long {
        int k = ac.t[u].term;
        int lo = lower_bound(idx[k].begin(), idx[k].end(), first) - idx[k].begin();
        int hi = upper_bound(idx[k].begin(), idx[k].end(), last) - idx[k].begin();
        return pre[k][hi] - pre[k][lo];
    };

    long long smallest = LLONG_MAX, biggest = LLONG_MIN;

    for (auto &s : numbers) {
        vector<string> sp = split(s);
        int first = stoi(sp[0]), last = stoi(sp[1]);
        const string &d = sp[2];

        long long total = 0;
        int v = 0;
        for (char ch : d) {
            v = ac.step(v, ch);
            for (int u = (ac.t[v].term != -1) ? v : ac.t[v].out; u; u = ac.t[u].out)
                total += query(u, first, last);
        }

        smallest = min(smallest, total);
        biggest = max(biggest, total);
    }

    cout << smallest << " " << biggest << endl;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string genes_temp_temp;
    getline(cin, genes_temp_temp);

    vector<string> genes_temp = split(rtrim(genes_temp_temp));

    vector<string> genes(n);

    for (int i = 0; i < n; i++) {
        string genes_item = genes_temp[i];

        genes[i] = genes_item;
    }

    string health_temp_temp;
    getline(cin, health_temp_temp);

    vector<string> health_temp = split(rtrim(health_temp_temp));

    vector<int> health(n);

    for (int i = 0; i < n; i++) {
        int health_item = stoi(health_temp[i]);

        health[i] = health_item;
    }

    string s_temp;
    getline(cin, s_temp);

    int s = stoi(ltrim(rtrim(s_temp)));

    vector<string> first_multiple_input;

    for (int s_itr = 0; s_itr < s; s_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        first_multiple_input.push_back(first_multiple_input_temp);
    }

    dnaHealth(genes, health, first_multiple_input);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
