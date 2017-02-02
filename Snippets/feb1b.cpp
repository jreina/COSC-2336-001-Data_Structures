#include <iostream>

using namespace std;

int main(void)
{
    int i, j;
    int *ptr1, *ptr2;

    i=5;
    j=6;

    ptr1 = &i;

    ptr2 = ptr1;

    //ptr2 = *ptr1;   // 1
    //ptr2 = &ptr1;   // 2

    ptr2 = &j;

    *ptr2 = *ptr1;

    cout << "*ptr2 = " << *ptr2 << endl;

    //*ptr1 = 2 **ptr2;

    //cout << "*ptr1 = " << *ptr1 << endl;
}

