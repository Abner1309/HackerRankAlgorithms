int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max_value = -1;
    for (int i = 0; i < keyboards.size(); i++) {
        for (int j = 0, aux = 0; j < drives.size(); j++) {
            aux = keyboards[i] + drives[j];
            if (b >= aux && aux > max_value) { max_value = aux; }
        }
    }
    return max_value;
}
