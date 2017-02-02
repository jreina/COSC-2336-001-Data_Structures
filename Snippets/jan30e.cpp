#include <iostream>

using namespace std;

void change_values(int *a, int *b)
{
  *a = 4;
  cout << "*a = " << *a <<endl;
  *b = 5;
}

int main(void)
{
  int a;
  int b;

  a = 1;
  b = 2;

  cout << "A is " << a << ", B is " << b << "\n";

  change_values(&a,&b);

  cout << "A is " << a << ", B is " << b << "\n";
} 
