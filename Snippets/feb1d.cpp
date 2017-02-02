#include <iostream>

using namespace std;

struct blt {
    int b;
    int l;
    int t;
};

void print_blt(blt *p)
{
    cout << "b = " << p->b << endl;
    cout << "l = " << p->l << endl;
    cout << "t = " << p->t << endl;
}

blt *sandwich_maker()  // can we alloc blt on stack?
{
    blt *p = new blt;

    p->b = 1;
    p->l = 1;
    p->t = 1;

    return p;
}


blt *sandwich_maker(int b, int l, int t)
{
    blt *p = new blt;

    p->b = b;
    p->l = l;
    p->t = t;

    return p;
}



// ^^^^^^^ kinda looks like a class, doesn't it???



int main(void)
{


    //1
    blt sandwich;       // note:  don.t need .struct blt sandwich.

    blt *psandwich; //2

    sandwich.b = 4;
    sandwich.l = 1;
    sandwich.t = 2;

    print_blt(&sandwich);

    //2
    psandwich = sandwich_maker();
    print_blt(psandwich);

    //3
    delete psandwich;

    psandwich = sandwich_maker(4, 5, 6);
    cout << "psandwich = " << psandwich << endl;
    print_blt(psandwich);
    delete psandwich;
    //cout << "psandwich = " << psandwich << endl;   // don't try this at home!
    ////print_blt(psandwich);
}
