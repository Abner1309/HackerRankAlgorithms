int jumpingOnClouds(vector<int> c) {
    int jumps = 0;
    
    for (int i = 0; i < c.size() - 1; i++) {        
        if (i + 2 < c.size() && c[i + 2] != 1) { i++; }        
        jumps++;
    } 
    
    return jumps;
}
