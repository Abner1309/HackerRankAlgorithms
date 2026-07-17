int simpleArraySum(vector<int> ar) {
    int ar_length = ar.size();
    int answer = 0;
    
    for (int i = 0; i < ar_length; i++) {
        answer = answer + ar[i];
    }
    
    return answer;
}
