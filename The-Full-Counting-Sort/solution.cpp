void countSort(vector<vector<string>> arr) {
    int half = arr.size() / 2;    
    vector<string> sorted_arr(100);
    for (int i = 0, aux; i < arr.size(); i++) {
        from_chars(arr[i][0].data(), arr[i][0].data() + arr[i][0].size(), aux);
        
        if (i < half) { sorted_arr[aux].append("-"); }
        else { sorted_arr[aux].append(arr[i][1]); }
        
        sorted_arr[aux].append(" ");
    }
    
    for (int i = 0; i < 100; i++) {
        cout << sorted_arr[i];
    }    
}
