#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class Complex 
{
    private:
        int real;
        int imaginary;
    public:
        Complex();

        Complex(int i1, int i2);

        void dump();

        Complex *operator+ (Complex right);
};

Complex::Complex() { real=0; imaginary=0; };

Complex::Complex(int i1, int i2) {  real=i1; imaginary=i2; };

void Complex::dump()
{
    cout << real << " + " << imaginary << "i\n";
}

Complex *Complex::operator+ (Complex right)
{
    Complex *psum;

    psum = new Complex();

    psum->real      = real      + right.real;
    psum->imaginary = imaginary + right.imaginary;

    return psum;
}


int main()
{
    Complex cn1(1,2);
    Complex cn2(3,4);

    Complex *pcn = cn1 + cn2;

    cout << "cn1 = ";      cn1.dump();
    cout << "cn2 = ";      cn2.dump();
    cout << "cn11 + cn2 = "; pcn->dump();

    delete pcn;
}
