#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <climits>

float value = 0;

bool isValidDate(const std::string& str) {
    std::stringstream ss(str);
    int year, month, day;
    char separator;

    // Parse the year, month, and day from the string
    ss >> year >> separator >> month >> separator >> day;

    // Check if the parsing was successful
    if (ss.fail() || ss.peek() != EOF) {
        return false;
    }

    try {
        // Create a time_point object representing the date
        std::tm date = {0};
        date.tm_year = year - 1900;
        date.tm_mon = month - 1;
        date.tm_mday = day;
        std::time_t tt = std::mktime(&date);
        std::tm* ptm = std::localtime(&tt);
    }
    catch (...) {
        return false;
    }
    return true;
}

bool isValidValue(const std::string& str) {
    try {
        char *pEnd;
        value = std::strtof(str.c_str(), &pEnd);
        if (value <= 0 || value > INT_MAX)
            return false;
    }
    catch (...) {
        value = 0; // reset value to 0
        return false;
    }
    return true;
}


int main() {
    std::ifstream SecDB("input.txt");
    std::string line;
    std::map<std::string, float> Values;

    // Ignore the first line which is not a date-value pair
    std::getline(SecDB, line);

    while (std::getline(SecDB, line)) {
        // std::cout << /*"TEST: " << */line << std::endl;
        std::stringstream ss(line);
        std::string strDate, strValue;
        char separator, pipe;

        // Parse the date and value from the line
        ss >> strDate >> separator >> strValue >> pipe;

        // Check if the date and value are valid
        if (!isValidDate(strDate)) {
            std::cerr << "Invalid date: " << strDate << std::endl;
            continue;
        }
        if (!isValidValue(strValue)) {
            std::cerr << "Invalid value: " << strValue << std::endl;
            continue;
        }

        // Insert the date and value into the map
        Values.insert(std::make_pair(strDate, value));
        std::cout << "TEST: " << strDate << " - " << value << std::endl;
    }

    // Print the map to verify the insertion
    for (std::map<std::string, float>::const_iterator it = Values.begin(); it != Values.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
    return 0;
}
