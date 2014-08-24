#include <iostream>
#include <iomanip>

using std::cout;    using std::endl;

int main()
{

    for (int i=1; i<=100; ++i){
        cout << std::setw(4) << i << std::setw(6) << i*i << endl;
    }

    return 0;
}
