#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <limits.h>

bool isDateOK(const std::string& str) {
    std::cout << "________: " << str << std::endl;
    // Parse the year, month, and day from the string
    char* endptr;
    int year = std::strtol(str.substr(0, 4).c_str(), &endptr, 10);
    int month = std::strtol(str.substr(5, 2).c_str(), &endptr, 10);
    int day = std::strtol(str.substr(8, 2).c_str(), &endptr, 10);

    // Check if the parsing was successful
    if (*endptr != '\0') {
        return false;
    }

    // Create a time_point object representing the date
    std::tm date;
    std::memset(&date, 0, sizeof(date));
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // Convert the time_point to a time_t value
    std::time_t t = std::mktime(&date);

    // If mktime returns -1, the date is invalid
    return (t != -1);
}

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

bool isValidValue(const std::string& str, float *value) {
    try {
        char *pEnd;
        *value = std::strtof(str.c_str(), &pEnd);
        if (*value <= 0 || *value > INT_MAX)
            return false;
    }
    catch (...) {
        return false;
    }
    return true;
}


int main() {
    float value = 0;
    std::ifstream SecDB("input.txt");
    std::string line;
    std::map<std::string, float> Values;

    // Ignore the first line which is not a date-value pair
    std::getline(SecDB, line);

    while (std::getline(SecDB, line)) {
        std::stringstream ss(line);
        std::string strDate, strValue;
        char separator, pipe;

        // Parse the date and value from the line
        ss >> strDate >> separator >> strValue >> pipe;

        // Check if the date and value are valid
        if (!isDateOK(strDate)) {
            std::cerr << "^^^^^^^^^^^: " << strDate << std::endl;
        }
        else
            std::cout << "###: " << str << std::endl;

        if (!isValidDate(strDate)) {
            std::cerr << "Invalid date: " << strDate << std::endl;
            // continue;
        }
        else if (!isValidValue(strValue, &value)) {
            std::cerr << "Invalid value: " << strValue << std::endl;
            // continue;
        }

        // Insert the date and value into the map
        Values.insert(std::make_pair(strDate, value));
     }

    // Print the map to verify the insertion
    for (std::map<std::string, float>::const_iterator it = Values.begin(); it != Values.end(); ++it) {
        std::cout << it->first << " => " << it->second << std::endl;
    }
    return 0;
}
