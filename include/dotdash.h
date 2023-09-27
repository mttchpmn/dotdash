//
// Created by Matt Chapman on 25/09/23.
//

#ifndef DOTDASH_DOTDASH_H
#define DOTDASH_DOTDASH_H


#include <string>

#include "parser.h"
#include "dictionary.h"

class Dotdash {
public:
    std::string encode(std::string text);
    std::string decode(std::string code);
private:
    Parser parser;
    Dictionary dictionary;
};


#endif //DOTDASH_DOTDASH_H
