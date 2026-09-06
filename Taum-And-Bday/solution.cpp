long taumBday(int b, int w, int bc, int wc, int z) {
    long c1 = ((long)b * bc) + ((long)w * wc);
    long c2 = ((long)b * (wc + z)) + ((long)w * wc);
    long c3 = ((long)b * bc) + ((long)w * (bc + z));
    long cf = 0;
    
    if (c1 <= c2 && c1 <= c3) { cf = c1; }  
    else if (c2 <= c1 && c2 <= c3) { cf = c2; }
    else { cf = c3; }
    
    return cf;
}
