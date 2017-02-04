#include <iostream>

using namespace std;

// (pass by VALUE!)
void change_values(int a, int b)
{
  a = 4;
  b = 5;
}

int main(void)
{
  int a;
  int b;

  a = 1;
  b = 2;

  cout << "A is " << a << ", B is " << b << "\n";

  change_values(a,b);

  cout << "A is " << a << ", B is " << b << "\n";
}