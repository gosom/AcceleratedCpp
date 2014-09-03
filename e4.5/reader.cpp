#include "reader.h"

using std::istream;
using std::string;
using std::vector;

istream& read_words(istream& in, vector<string>& words){
    words.clear();
    string word;

    while (in >> word)
        words.push_back(word);

    in.clear();

   return in;
}
