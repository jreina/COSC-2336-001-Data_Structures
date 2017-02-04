#include <iostream>

using namespace std;

int main(void)
{
    int i = 100, *ptr;

    cout << "i = " << i << endl;

    ptr = new int[4];
    cout << "ptr = " << ptr << endl;
    
    if (ptr) cout << "*ptr = " << *ptr << endl;
}
