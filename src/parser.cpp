//
// Created by Matt Chapman on 25/09/23.
//

#include <iostream>
#include <string>
#include <cctype>
#include "../include/parser.h"

std::vector<char> Parser::parse_text(std::string text) {
    std::vector<char> result = std::vector<char>();

    for (auto c: text) {
        char newChar = std::tolower(c);
        result.push_back(newChar);
    }

    return result;
}

std::vector<std::string> Parser::parse_code(std::string code) {
    std::vector<std::string> result;
    std::string temp;

    for (int i = 0; i < code.length(); i++) {
        char character = code[i];

        if (i == code.length() - 1) {
            temp += character;
            result.push_back(temp);
            continue;
        }

        if (character == ' ') {
            if (temp.length() > 0) {
                result.push_back(temp);
            }
            temp = "";
            continue;
        }

        if (character == '/') {
            result.push_back("/");
            continue;
        }

        temp += character;
    }

    return result;
}
