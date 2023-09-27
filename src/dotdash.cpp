//
// Created by Matt Chapman on 25/09/23.
//

#include "../include/dotdash.h"

std::string Dotdash::encode(std::string text) {
    auto chars = parser.parse_text(text);
    std::string result;

    for (char c: chars) {
        result += dictionary.get_code_for_char(c);
        result += " ";
    }

    return result;
}

std::string Dotdash::decode(std::string code) {
    auto codes = parser.parse_code(code);
    std::string result;

    for (auto s : codes) {
        result += dictionary.get_char_for_code(s);
    }
    return result;
}
