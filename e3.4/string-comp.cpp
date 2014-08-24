#include <iostream>
#include <string>

using std::cout;    using std::cin;
using std::endl;    using std::string;

int main()
{
    string in = "";
    string::size_type min = in.max_size();
    string::size_type max = 0;

    cout << endl;
    cout << "Please give some words: ";
    while (cin >> in){
        string::size_type cs = in.size();
        if (cs >= max)
            max = cs;
        if (cs <= min)
            min = cs;
    }

    cout << endl;
    cout << "Longest: " << max << " Shortest: " << min << endl;
    return 0;
}
