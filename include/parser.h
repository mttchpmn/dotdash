//
// Created by Matt Chapman on 25/09/23.
//

#ifndef DOTDASH_PARSER_H
#define DOTDASH_PARSER_H

#include <vector>

class Parser {
public:
    std::vector<char> parse_text(std::string text);

    std::vector<std::string> parse_code(std::string basicString);
};


#endif //DOTDASH_PARSER_H
