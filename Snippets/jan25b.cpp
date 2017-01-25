#include <iostream>

using namespace std;   // a namespace is a "named scope"


int main(void)
{
    //Java: int x[] = new int[10];

    int *ar = new int[10];   // allocates array on heap!
    int ar2[10];             // allocated on the stack

    cout << "ar = " << (long) ar << endl;
    cout << "ar2 = " << (long) ar2 << endl;

    delete[] ar;

}
