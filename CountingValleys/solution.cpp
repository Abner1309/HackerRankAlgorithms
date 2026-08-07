int countingValleys(int steps, string path) {
    int sea_level = 0;
    int valley_count = 0;
    
    for (int i = 0; i < steps; i++) {
        if (path[i] == 'D') { 
            sea_level--;
        }
        else if (path[i] == 'U') { 
            if (sea_level == -1) { valley_count++; }
            sea_level++;
        }
    }
    
    return valley_count;
}