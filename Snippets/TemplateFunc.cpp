#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// FUNCTION TEMPLATES
template<class T>    // create a template for a generic data type 'T'
                     // 'T' is called a TEMPLATE PARAMETER
T sum(T op1, T op2)  // declare return type and data type of parms as 'T'...
{
    T tsum;

    tsum = op1 + op2;

    //return static_cast<T>(tsum);  // example of typecast...
    return tsum;                    // not necessary in this case
}

main()
{
    int i=1, j=2;
    double d=1.2, e=2.3;

    // specifies that 'T' should be replaced with "int" in sum
    cout << "i + j = " << sum<int>(i,j) << endl;
    // specifies that 'T' should be replaced with "double" in sum
    cout << "d + e = " << sum<double>(d,e) << endl;

    // OR, if types of params are clear, you can omit type:

    cout << "i + j = " << sum(i,j) << endl;
    cout << "d + e = " << sum(d,e) << endl;

    cout << "1 + 2 = " << sum(1,2) << endl;
    cout << "1.2 + 2.3 = " << sum(1.2, 2.3) << endl;
}

