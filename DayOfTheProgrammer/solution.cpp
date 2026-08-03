string dayOfProgrammer(int year) {
    std::string final_date = "";
    std::string str_year = std::to_string(year);
    
    if (year < 1918) {
        if (year % 4 == 0) { final_date.append("12."); }
        else { final_date.append("13."); }
        final_date.append("09.");
        final_date.append(str_year);
    }
    else if (year > 1918) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) { final_date.append("12."); }
        else { final_date.append("13."); }
        final_date.append("09.");
        final_date.append(str_year);
    }
    else {
       final_date.append("26.");
       final_date.append("09.");
       final_date.append("1918"); 
    }
    
    return final_date;
}
