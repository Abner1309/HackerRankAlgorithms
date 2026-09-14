string timeInWords(int h, int m) {
    std::string answer;    
    std::vector<std::string> numbers = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};    
    int full_hour = 60, rest_minutes = 0;
    
    if (m == 0) {
        answer.append(numbers.at(h));
        answer.append(" ");
        answer.append(numbers.at(0));
    }
    else if (m == 30) {
        answer.append(numbers.at(30));
        answer.append(" past ");
        answer.append(numbers.at(h));
    }
    else if (m < 30) {
        rest_minutes = m;
        answer.append(numbers.at(rest_minutes));
        if (rest_minutes == 1) { answer.append(" minute"); }
        else if (rest_minutes != 15) { answer.append(" minutes"); }
        answer.append(" past ");
        answer.append(numbers.at(h));
    }
    else {
        rest_minutes = full_hour - m;
        answer.append(numbers.at(rest_minutes));
        if (rest_minutes == 1) { answer.append(" minute"); }
        else if (rest_minutes != 15) { answer.append(" minutes"); }
        answer.append(" to ");
        answer.append(numbers.at(h+1));
    }
    
    return answer;
}
