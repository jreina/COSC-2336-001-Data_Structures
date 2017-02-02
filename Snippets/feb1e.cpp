#include <iostream>

using namespace std;

class blt 
{
    private:
        int b;
        int l;
        int t;
    public:
        blt() { b=1; l=1; t=1; };

        blt(int bb, int ll, int tt) { b=bb; l=ll; t=tt;};

        void print_blt()
        {
            cout << "bacon = " << b << endl;
            cout << "lettuce = " << l << endl;
            cout << "tomato = " << t << endl << endl;
        }
};

int main()
{
    // NOTE:  storage is allocated/instantiated here!
    blt myblt1;   // NOTE:  no parens!!!
    blt myblt2(1,2,3);
    blt *pblt;

    pblt = new blt(2,4,6);

    myblt1.print_blt();
    myblt2.print_blt();

    (*pblt).print_blt();
    pblt->print_blt();

    delete pblt;
}
