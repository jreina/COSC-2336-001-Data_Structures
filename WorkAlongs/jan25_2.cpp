#include <iostream>

using namespace std;   // a namespace is a "named scope"

void func1(int i)
{
   cout << "func1: i = " << i << endl;
}


int main(void)
{
    string s;
    int i;

    cout << "enter your name and fav num: ";

    cin >> s >> i;

    cout << "hello world, s = " << s << ", i = " << i << endl;

    func1(i);
    return 1;
}