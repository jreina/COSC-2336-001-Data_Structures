#include <iostream>

using namespace std;   // a namespace is a "named scope"


int main(void)
{
    unsigned int i = 5;

    bool b = false;

    cout << "main: i = " << i << endl;
    cout << "main: b = " << b << endl;

    cout << "main: b*5 = " << (b*5) << endl;

    if (5) cout << "YES\n";
}