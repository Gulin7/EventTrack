#include "Tools.h"
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>

std::string trim(const std::string& stringToTrim)
{
    std::string result(stringToTrim);
    size_t position = result.find_first_not_of(" ");
    if (position != -1)
        result.erase(0, position);
    position = result.find_last_not_of(" ");
    if (position != std::string::npos)
        result.erase(position + 1);
    return result;
}

std::vector<std::string> tokenize(const std::string& stringToTokenize, char delimiter)
{
    std::vector<std::string> result;
    std::stringstream ss(stringToTokenize);
    std::string token;
    while (getline(ss, token, delimiter))
        result.push_back(token);
    return result;
}
