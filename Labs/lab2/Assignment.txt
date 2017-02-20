
PF3 Lab2

Given the "node" class below, implement the functions in the
linked_list class to provide a singly linked list of nodes.

Use the main program included below to test your program.  This
will allow you/me to run different sets of data against your
program without your code needing to be changed/recompiled, etc.

Do not modify my code, except perhaps to temporarily comment out
parts of it that you have not yet supported.

Put your source code in ~/PF3/lab2/lab2.cpp

=====================================================================
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class node
{
  public:
    typedef int data_t;

    node *next;
    data_t data;

    node(data_t d) { next = NULL; data = d; }
};


class linked_list
{
  private:
    node *head;

  public:

    linked_list()
    {
        head = NULL;
    }

    int size();

    void add(int n, node::data_t d);

    void add_last(node::data_t d);

    void add_first(node::data_t d);

    node::data_t get(int n);

    node::data_t get_first();

    node::data_t get_last();

    void remove(int n);

    void remove_first();

    void remove_last();

    void dump()
    {
        node *tptr;

        cout << "    DUMP: (size = " << size() << ", first = " << get_first() << ", last = " << get_last() << ")\n";

        if (head == NULL) {
            cout << "    DUMP: head = NULL\n\n";
            return;
        }

        tptr = head;

        cout << "    DUMP:   head = : " << tptr->data << endl;
        while (tptr->next != NULL) {
            tptr = tptr->next;
            cout << "    DUMP:   data = : " << tptr->data << endl;
        }
        cout << endl;
    }
};


int main(void)
{
    linked_list ll;
    string cmd;
    int i, d;

    while (cin >> cmd >> i >> d)
    {
        cout << "MAIN: cmd = " << cmd << ", i = " << i
             << ", d = " << d << endl;

        if (cmd == "add")
            ll.add(i, d);
        else if (cmd == "addf")
            ll.add_first(d);
        else if (cmd == "addl")
            ll.add_last(d);
        else if (cmd == "rem")
            ll.remove(i);
        else if (cmd == "remf")
            ll.remove_first();
        else if (cmd == "reml")
            ll.remove_last();
        else if (cmd == "get") {
            d = ll.get(i);
            cout << "get returns: " << d << endl;
        } else if (cmd == "getf") {
            d = ll.get_first();
            cout << "getf returns: " << d << endl;
        } else if (cmd == "getl") {
            d = ll.get_last();
            cout << "getl returns: " << d << endl;
        } else if (cmd == "dump")
            ll.dump();
        else if (cmd == "quit")
            exit(0);
    }
}