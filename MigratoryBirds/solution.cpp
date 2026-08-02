int migratoryBirds(vector<int> arr) {
    int max = 0, answer = -1;
    std::vector<int> sightings = {0,0,0,0,0};    
    for (int i = 0; i < arr.size(); i++) {
        sightings[arr[i] - 1]++;
    }        
    for (int j = 0; j < sightings.size(); j++) { 
        if (sightings[j] > max) { 
            max = sightings[j];
            answer = j + 1;
        }
    }
    return answer;
}
