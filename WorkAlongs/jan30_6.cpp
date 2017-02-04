#include <iostream>

using namespace std;


int main()
{
    int i;
    int *ptr;
    char c;

    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;

    ptr = (int *) &c;
    cout << "ptr = " << ptr << endl;
    
    i = 8;

    cout << "i = " << i << endl;
    cout << "*ptr = " << *ptr << endl;


}
