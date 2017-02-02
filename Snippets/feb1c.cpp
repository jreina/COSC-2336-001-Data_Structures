#include <iostream>

using namespace std;


int main(void)
{
    struct blt {
        int b;
        int l;
        int t;
    };


    // 1
    blt sandwich;       // note:  don.t need .struct blt sandwich.
    struct blt sandwich2;  // alternate declaration

    sandwich.b = 4;
    sandwich.l = 1;
    sandwich.t = 2;

    cout << "b = " << sandwich.b << endl;
    cout << "l = " << sandwich.l << endl;
    cout << "t = " << sandwich.t << endl;


    // 2
    blt *ptr;

    // unlike an array, a struct variable does not hold the address of itself.
    //cout << "sandwich = " << sandwich << endl;  // Try to compile this!!!

    cout << "sandwich = " << &sandwich << endl;

    ptr = &sandwich;

    cout << "b = " << (*ptr).b << endl;
    cout << "l = " << (*ptr).l << endl;
    cout << "t = " << (*ptr).t << endl;


























    // 3 alternate syntax
    cout << "display using ptr syntax\n";
    cout << "b = " << ptr->b << endl;
    cout << "l = " << ptr->l << endl;
    cout << "t = " << ptr->t << endl;

    // 4
    ptr = new blt;
    ptr->b = 1;
    cout << "new sandwich:\n";
    cout << "b = " << ptr->b << endl;
    cout << "old sandwich:\n";
    cout << "b = " << sandwich.b << endl;

    delete ptr;
}
