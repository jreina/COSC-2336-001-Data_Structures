#include <iostream>

using namespace std;

#define ARSIZ 4

int main(void)
{
    int i, *ptr;

    cout << "i = " << i << endl;

    ptr = new int[ARSIZ];

    cout << "ptr = " << ptr << endl;
    
    if (ptr) cout << "*ptr = " << *ptr << endl;

    int ar[ARSIZ];

    ar[0] = 13;
    ar[1] = 14;
    ar[2] = 15;
    ar[3] = 16;

    cout << "ar = " << ar << endl;

    for (i=0; i<ARSIZ; i++)
    {
        cout << "ar[" << i << "] = " << ar[i] << endl; 
    }

    delete[] ptr;


    cout << "ptr = " << ptr << endl;

    if (ptr) cout << "*ptr = " << *ptr << endl;

    ptr = ar;

    cout << "ptr = " << ptr << endl;
    cout << "*ptr = "  << *ptr << endl;

    ptr++;
    cout << "ptr = " << ptr << endl;
    cout << "*ptr = "  << *ptr << endl;

    for (i=0; i<ARSIZ; i++)
    {
        cout << "ar[" << i << "] = " << ar[i] << endl;
        cout << "ptr = " << ptr << endl;
        cout << "*ptr = "  << *ptr << endl;
        ptr++;
    }
}
