#include <iostream>

using namespace std;

void init_arrays(int an_array[])
//void init_arrays(int *an_array)   // either one will work
{
    an_array[0] = 1;
    an_array[1] = 2;
}

int main(void)
{
   int a1[2];

   a1[0] = 5;
   a1[1] = 5;
   
   cout << "a1[0] = " << a1[0] << ", a1[1] = " << a1[1] << endl;

   init_arrays(a1);

   cout << "a1[0] = " << a1[0] << ", a1[1] = " << a1[1] << endl;
}

