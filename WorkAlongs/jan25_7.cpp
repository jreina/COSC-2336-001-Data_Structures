#include <iostream>

using namespace std;   // a namespace is a "named scope"


#define LIMIT 10

int main(void)
{
    const double PI = 3.141592654;

    unsigned int i = 5;

    bool b = true;

    cout << "main: i = " << i << endl;
    cout << "main: b = " << b << endl;

    cout << "main: b*5 = " << (b*5) << endl;

    if (5) cout << "YES\n";

    i = 5;

    cout << "5<6 = " << (5<6) << endl;

    while(i)
    {
        cout << "i = " << i << endl;

        i--;
    }
}