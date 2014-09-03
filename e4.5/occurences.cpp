#include "reader.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main(){
    std::vector<std::string> words;

    std::cout << "Write some words" << std::endl;
    read_words(std::cin, words);

    std::sort(words.begin(), words.end());

    std::string current = words[0];
    int count = 1;

    for (std::vector<std::string>::size_type i=1; i < words.size(); ++i){
        if (current != words[i]){
            std::cout << current << " occured " << count << " times" << std::endl;
            count = 0;
            current = words[i];
        }
        ++count;
    }

    if (count > 0)
        std::cout << current << " occured " << count << " times" << std::endl;

    return 0;
}
