#include <iostream>

using namespace std;

#define ARSIZ 4

main()
{
    int i, *ptr;

    cout << "i = " << i << endl;

    ptr = new int[ARSIZ];

    cout << "ptr = " << ptr << endl;

    if (ptr) cout << "*ptr = " << *ptr << endl;


    int ar[ARSIZ];

    ar[0] = 0;
    ar[1] = 1;
    ar[2] = 2;
    ar[3] = 3;

    cout << "ar = " << ar << endl;

    for (i=0; i<ARSIZ; i++)
    {
        cout << "ar[" << i << "] = " << ar[i] << endl;
    }

    delete[] ptr;


    cout << "ptr = " << ptr << endl;

    if (ptr) cout << "*ptr = " << *ptr << endl;

    ptr = ar;  // == &ar[0];

    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    ptr++;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    ptr++;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    ptr++;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

    ptr++;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = " << *ptr << endl;

}
