#include <iostream>

using namespace std;

#define MAX 7

main()
{
    int i;
    int m=88;
    int ar[4];
    int n=99;


    cout << "&m = " << (long) &m << endl;
    cout << "&n = " << (long) &n << endl;
    cout << "ar = " << (long) ar << endl;
    cout << "&ar[0] = " << (long) &ar[0] << endl;
    cout << "&ar[1] = " << (long) &ar[1] << endl;

    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

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
