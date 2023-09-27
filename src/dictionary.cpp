//
// Created by Matt Chapman on 25/09/23.
//

#include "../include/dictionary.h"

std::string Dictionary::get_code_for_char(char c) {
    return code_table.count(c)
           ? code_table.at(c)
           : "X";
}

char Dictionary::get_char_for_code(std::string code) {
    for (const auto& pair: code_table) {
        if (pair.second == code) {
            return std::toupper(pair.first);
        }
    }
    return 'X';
}
