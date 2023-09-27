#include <iostream>

#include "../include/dotdash.h"

void print_help() {
    std::cout << "-----| DotDash |-----\n";
    std::cout << "\t - Use `dotdash encode [text]` to encode text into morse code\n";
    std::cout << "\t - Use `dotdash decode [morse]` to decode morse code to text\n";
}

int main(int argc, char *argv[]) {
    Dotdash dotdash;

    if (argc < 2) {
        print_help();
        return 0;
    }

    auto command = argv[1];
    auto input = argv[2];

    std::string result;

    if (strcmp(command, "encode") == 0) {
        result = dotdash.encode(input);
    }

    if (strcmp(command, "decode") == 0) {
        result = dotdash.decode(input);
    }

    std::cout << result << "\n";

    return 0;
}

