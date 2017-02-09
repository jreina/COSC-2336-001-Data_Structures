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

    p1 = new node(0);

    cout << "p1 = " << p1 << endl;
    cout << "p1->data = " << p1->data << endl;
    cout << "p1->next = " << p1->next << endl;

    node *p2 = new node(1);

    cout << "\np2 = " << p2 << endl;
    cout << "p2->data = " << p2->data << endl;
    cout << "p2->next = " << p2->next << endl;

    p1->next = p2;

    node *tptr;

    tptr = p1;

    cout << "\ntptr = " << tptr << endl;
    cout << "tptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;

    //tptr = p2;
    //tptr = p1->next;

    tptr = tptr->next;  //we will do this a lot!

    cout << "\ntptr = " << tptr << endl;
    cout << "tptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;

    tptr->next = new node(2);
    tptr = tptr->next;  //we will do this a lot!
    cout << "\ntptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;

    tptr->next = new node(3);
    tptr = tptr->next;  //we will do this a lot!
    cout << "\ntptr->data = " << tptr->data << endl;
    cout << "tptr->next = " << tptr->next << endl;

    node *head;
    head = p1;
    p1 = p2 = NULL;

    tptr = head;

    //while(1: tptr != NULL)   (2: tptr->next != NULL)
    while(tptr)
    {
        cout << "data = " << tptr->data << endl;
        tptr = tptr->next;
    }

    delete head->next->next->next;
    delete head->next->next;
    delete head->next;
    delete head;

    //delete tptr;
    //delete p1;
    //delete p2->next;
    //delete p2;
    //delete tptr;
}
