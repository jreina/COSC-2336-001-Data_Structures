#include <iostream>

using namespace std;   // a namespace is a "named scope"

int func1(int i, int j)
{
   cout << "func1: i = " << i << endl;
   cout << "func1: j = " << j << endl;

   int sum = i + j;
   return sum;
}


int main(void)
{
    int i = func1(5, 44);

    cout << "main: i = " << i << endl;
}