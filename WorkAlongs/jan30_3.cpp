#include <iostream>

using namespace std;

#define MAX 4

int main(void)
{
    int i;
    int m=88;
    int ar[4];
    int n=99;

    cout << "&m = " << (long) &m << endl;
    cout << "&n = " << (long) &n << endl;
    cout << "ar = " << (long) ar << endl;

    cout << "m = " << (long) m << endl;
    cout << "n = " << (long) n << endl;

    for (i=0; i<MAX; i++)
    {
        ar[i] = i;
    }

    for (i=0; i<MAX; i++)
    {
        cout << "ar[" << i << "] (" << (long) &ar[i] << ")= " << ar[i] << endl;
    }

    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

}
