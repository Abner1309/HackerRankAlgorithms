#include <bits/stdc++.h>
using namespace std;

string stringPlusOne(string number) {
    number[number.size() - 1] += 1;

    for (int i = number.size() - 1; i > 0; i--) {
        if (number[i] > 57) {
            number[i - 1] += 1;
            number[i] = number[i] - 10;            
        }
        else { break; }
    }

    if (number[0] > 57) {
        number.insert(0, 1, '1');
        number[1] = number[1] - 10;
    }
    
    return number;
}

void separateNumbers(string s) {
    string positive_answer = "YES";
    string negative_answer = "NO";
    string number_answer = "";
    int length_limit = (int) floor(s.size() / 2);
   
    if (s.size() < 2 || s[0] == '0') { cout << negative_answer << endl; return; }

    for (int i = 1; i <= length_limit; i++) {
        int jump = i; string number = "", next_number = "";        
        for (int j = 0; j < s.size(); j += number.size()) {
            number = s.substr(j, jump);
            if (j == 0) {
                number_answer = number;
            }
            if (j != 0 && number != next_number) {
                number.clear(); next_number.clear();
                break;
            }
            next_number = stringPlusOne(number);
            jump = next_number.size();
        }
        if (number.size() > 0) {
            cout << positive_answer << " " << number_answer << endl;
            return;
        }
    }
    
    cout << negative_answer << endl;
}

int main() {
    string str_int;
    cin >> str_int;
    
    separateNumbers(str_int);

    return 0;
}
