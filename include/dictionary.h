//
// Created by Matt Chapman on 25/09/23.
//

#ifndef DOTDASH_DICTIONARY_H
#define DOTDASH_DICTIONARY_H


#include <string>
#include <unordered_map>

class Dictionary {
public:
    std::string get_code_for_char(char c);
    char get_char_for_code(std::string code);
private:
    std::unordered_map<char, std::string> code_table = {
            {'a', ".-"},
            {'b', "-..."},
            {'c', "-.-."},
            {'d', "-.."},
            {'e', "."},
            {'f', "..-."},
            {'g', "--."},
            {'h', "...."},
            {'i', ".."},
            {'j', ".---"},
            {'k', "-.-"},
            {'l', ".-.."},
            {'m', "--"},
            {'n', "-."},
            {'o', "---"},
            {'p', ".--."},
            {'q', "--.-"},
            {'r', ".-."},
            {'s', "..."},
            {'t', "-"},
            {'u', "..-"},
            {'v', "...-"},
            {'w', ".--"},
            {'x', "-..-"},
            {'y', "-.--"},
            {'z', ".-.-"},
            {' ', "/"},
    };
};


#endif //DOTDASH-DICTIONARY-H
