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

    ptr2 = (int *) *ptr1;
    //ptr2 = &ptr1;
}
