#include <iostream>

using namespace std;

class node
{
  public:
    typedef int data_t;

    node *next;
    data_t data;

    node(data_t d) { data = d; next = NULL; }
};

int main(void)
{
    node *p1;  // p1 is a pointer to a node!
    cout << "p1 = " << p1 << endl;
    //cout << "(*p1).data = " << (*p1).data << endl;
    //cout << "p1->data = " << p1->data << endl;

    p1 = new node(5);

    cout << "p1 = " << p1 << endl;
    cout << "p1->data = " << p1->data << endl;
    cout << "p1->next = " << p1->next << endl;

    node *p2 = new node(6);

    cout << "p2 = " << p2 << endl;
    cout << "p2->data = " << p2->data << endl;
    cout << "p2->next = " << p2->next << endl;

    p1->next = p2;

    node *tptr;

    tptr = p1;

    cout << "tptr = " << tptr << endl;
    cout << "tptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;

    //tptr = p2;
    //tptr = p1->next;

    tptr = tptr->next;  //we will do this a lot!

    cout << "tptr = " << tptr << endl;
    cout << "tptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;



    //delete tptr;
    delete p1;
    delete p2;
}
