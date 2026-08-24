int jumpingOnClouds(vector<int> c, int k) {
    int energy_level = 100;
    
    int i1 = 0, i2 = 0;
    while ((i1 != 0 || i2 == 0) && energy_level > 0) {
        if (c[i1] == 1) { energy_level -= 2; }
        
        i1 = (i1 + k) % c.size(); 
        i2++;
        energy_level--;
    }
    if (energy_level < 0) { energy_level = 0; }
    
    return energy_level;
}
