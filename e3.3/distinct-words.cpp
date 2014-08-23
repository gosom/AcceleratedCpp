#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;    using std::endl;
using std::string;  using std::cin;
using std::vector;  using std::sort;

int main()
{
    vector<string> words;
    int count = 0;
    string w;

    cout << "please enter a phrase: ";

    while (cin >> w)
        words.push_back(w);

    sort(words.begin(), words.end());

    typedef vector<string>::size_type vec_siz;
    vec_siz size = words.size();
    for(int i=0;i<size;++i){
        if(i == 0)
            count++;
        else if(words[i] != words[i-1])
            count++;
    }

    cout << "There are " << count << " distinct words" << endl;

    return 0;
}
