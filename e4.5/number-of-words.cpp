#include "reader.h"

#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<std::string> words;

    std::cout << "Write some words" << std::endl;
    read_words(std::cin, words);

    std::cout << "There are " << words.size() << " words" << std::endl;

    return 0;
}
