long aVeryBigSum(vector<long> ar) {
    long answer = 0;
    
    for (int i = 0; i < ar.size(); i++) {
        answer = answer + ar[i];
    }
    
    return answer;
}
