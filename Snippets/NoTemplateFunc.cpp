#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int sum(int op1, int op2)
{
    int tsum;

    tsum = op1 + op2;

    return tsum;
}


double sum(double op1, double op2)
{
    double tsum;

    tsum = op1 + op2;

    return tsum;
}

main()
{
    int i=1, j=2;
    double d=1.2, e=2.3;

    cout << "i + j = " << sum(i,j) << endl;
    cout << "d + e = " << sum(d,e) << endl;

    cout << "1 + 2 = " << sum(1,2) << endl;
    cout << "1.2 + 2.3 = " << sum(1.2, 2.3) << endl;
}
