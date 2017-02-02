#include <iostream>

using namespace std;


main()
{
    int i;
    int *ptr;

    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;
    cout << "&ptr = " << &ptr << endl;

    //ptr = new int[ARSIZ];

    ptr = &i;
    cout << "ptr = " << ptr << endl;

    i = 8;
   
    cout << "i = " << i << endl;
    cout << "*ptr = " << *ptr << endl;


}
