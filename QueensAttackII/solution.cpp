int queensAttack(int n, int k, int r_q, int c_q, vector<vector<int>> obstacles) {
    int answer = 0;
    int maximum = 0;    
    
    // Left Horizontal
    maximum = c_q - 1;
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] == r_q && obstacles[i][1] < c_q) {
            aux = c_q - obstacles[i][1] - 1;
            if (aux < maximum) { maximum = aux; }
        }
    }
    answer += maximum;
    
    // Right Horizontal
    maximum = n - c_q;
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] == r_q && obstacles[i][1] > c_q) {
            aux = obstacles[i][1] - c_q - 1;
            if (aux < maximum) { maximum = aux; }
        }
    }
    answer += maximum;
    
    // Top Vertical
    maximum = n - r_q;
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][1] == c_q && obstacles[i][0] > r_q) {
            aux = obstacles[i][0] - r_q - 1;
            if (aux < maximum) { maximum = aux; }
        }
    }
    answer += maximum;
    
    // Down Vertical
    maximum = r_q - 1;
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][1] == c_q && obstacles[i][0] < r_q) {
            aux = r_q - obstacles[i][0] - 1;
            if (aux < maximum) { maximum = aux; }
        }
    }
    answer += maximum;
    
    // Top-Left Diagonal
    maximum = min(n - r_q, c_q - 1);
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] > r_q && obstacles[i][1] < c_q) {
            aux = obstacles[i][0] - r_q;
            if (c_q - obstacles[i][1] == aux) {
                aux--;
                if (aux < maximum) { maximum = aux; }    
            }          
        }
    }
    answer += maximum;

    // Top-Right Diagonal
    maximum = min(n - r_q, n - c_q);
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] > r_q && obstacles[i][1] > c_q) {
            aux = obstacles[i][0] - r_q;
            if (obstacles[i][1] - c_q == aux) {
                aux--;
                if (aux < maximum) { maximum = aux; }    
            }          
        }
    }
    answer += maximum;

    // Down-Left Diagonal
    maximum = min(r_q - 1, c_q - 1);
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] < r_q && obstacles[i][1] < c_q) {
            aux = r_q - obstacles[i][0];
            if (c_q - obstacles[i][1] == aux) {
                aux--;
                if (aux < maximum) { maximum = aux; }    
            }          
        }
    }
    answer += maximum;

    // Down-Right Diagonal
    maximum = min(r_q - 1, n - c_q);
    for (int i = 0, aux = 0; i < obstacles.size(); i++) {
        if (obstacles[i][0] < r_q && obstacles[i][1] > c_q) {
            aux = r_q - obstacles[i][0];
            if (obstacles[i][1] - c_q == aux) {
                aux--;
                if (aux < maximum) { maximum = aux; }    
            }          
        }
    }
    answer += maximum;
    
    return answer;
}
