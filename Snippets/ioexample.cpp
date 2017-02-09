#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int i, j;

    while(1)
    {
        cin >> s >> i >> j;

        cout << "s = " << s << ", i = " << i << ", j = " << j << endl;

        if (s == "hello") cout << "YUP\n";
    }
}

