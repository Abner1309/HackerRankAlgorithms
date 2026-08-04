void bonAppetit(vector<int> bill, int k, int b) {    
    int sum_bill_anna = 0;
    for (int i = 0; i < bill.size(); i++) {
        if (i != k) { sum_bill_anna += bill[i]; }
    }
    int division_bill_anna = sum_bill_anna / 2;
    int money_change = b - division_bill_anna;    
    if (money_change == 0) { std::cout << "Bon Appetit" << std::endl; }
    else { std::cout << money_change << std::endl; }
}
