#include <iostream>

using std::cout;    using std::endl;
using std::string;  using std::cin;

int main()
{
    int n1, n2;

    cout << endl;

    cout << "First number: ";
    cin >> n1;

    cout << endl << "Second number: ";
    cin >> n2;

    cout << endl;

    if (n1 > n2)
        cout << n1 << " is larger than " << n2;
    else if (n1 < n2)
        cout << n2 << " is larger than " << n1;
    else
        cout << n1 << " is equals to " << n2;
    cout << endl;

    return 0;
}
