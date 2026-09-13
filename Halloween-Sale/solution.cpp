int howManyGames(int p, int d, int m, int s) {
    int answer = 0;
    
    int budget = s, price = p, discount = d, minimum = m;
    while (budget >= price) {
        budget = budget - price;
        if (price - discount >= minimum) { price = price - discount; }
        else { price = minimum; }    
        answer = answer + 1;
    }
    
    return answer;
}
