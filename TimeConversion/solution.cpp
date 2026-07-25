string timeConversion(std::string s) {
    std::string hours = s.substr(0, 2);
    std::string minutes = s.substr(3, 2);
    std::string seconds = s.substr(6, 2);
    std::string am_pm = s.substr(8, 2);
    std::string answer = "";
    int var_sum = 12;
    
    if (am_pm == "AM") {
        if (hours == "12") {
            answer = "00:" + minutes + ":" + seconds;
        } else {
            answer = hours + ":" + minutes + ":" + seconds;
        }
    } else {
        if (hours == "12") {
            answer = hours + ":" + minutes + ":" + seconds;
        } else {
            var_sum += std::stoi(hours);
            hours = std::to_string(var_sum);
            answer = hours + ":" + minutes + ":" + seconds;
        }
    }
    
    return answer;
}
