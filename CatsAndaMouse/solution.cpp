string catAndMouse(int x, int y, int z) {
    std::string answer;
    int cat_a_distance = std::abs(x - z);
    int cat_b_distance = std::abs(y - z);
    
    if (cat_a_distance < cat_b_distance) { answer.append("Cat A"); }
    else if (cat_a_distance > cat_b_distance) { answer.append("Cat B"); }
    else { answer.append("Mouse C"); }    

    return answer;
}
