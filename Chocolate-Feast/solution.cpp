int chocolateFeast(int n, int c, int m) {
    int chocolates = 0;
    int packaging = 0;
    
    chocolates += n / c;
    packaging += n / c;
    
    int aux1 = 0, aux2 = 0;
    while (packaging >= m)
    {
        aux1 = packaging / m;
        aux2 = packaging % m;
        packaging = aux1 + aux2;        
        chocolates += aux1;
    }    
    
    return chocolates;
}
