void plusMinus(vector<int> arr) {
    float negative = 0.0, neutral = 0.0, positive = 0.0;
    float frac_neg = 0.0, frac_neut = 0.0, frac_pos = 0.0;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] < 0) { negative++; }
        else if (arr[i] > 0) { positive++; }
        else { neutral++; }
    }
    
    frac_neg = negative / arr.size();
    frac_neut = neutral / arr.size();
    frac_pos = positive / arr.size();
    
    printf("%.6f\n",frac_pos);    
    printf("%.6f\n",frac_neg);   
    printf("%.6f\n",frac_neut);
}
