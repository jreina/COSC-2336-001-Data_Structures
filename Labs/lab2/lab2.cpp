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

    node::data_t get(int n){
        if(n < size()){
            node *tptr = head;
            for(int i = 0; i < n; i++) tptr=tptr->next;
            return tptr->data;
        }
    }

    node::data_t get_first(){
        if(head) return head->data;
    }

    node::data_t get_last(){
        if(head) {
            node *ptr = head;
            while(ptr->next) ptr=ptr->next;
            return ptr->data;
        }
    }

    int size()
    {
        node *tptr = head;

        int c = 0;

        while(tptr)
        {
            c++;
            tptr = tptr->next;
        }

        return c;
    }

    void add(node::data_t index, node::data_t d)
    {
        int count = size();
        
        if(index > count || index < 0) return;
        if(index == 0) {
            node *nhp = new node(d);
            nhp->next = head;
            head = nhp;
        }
        else if(index == count) {
            node *tptr = head;
            if (head == NULL)
            {
                head = new node(d);
                return;
            }
            while (tptr->next != NULL) tptr = tptr->next;
            tptr->next = new node(d);
        }
        else if(index < count) {
            node *tptr = head;
            node *nptr = new node(d);
            for(int i = 0; i < index - 1; i++) {
                tptr = tptr->next;
            }
            nptr->next=tptr->next;
            tptr->next=nptr;
        }
    }

    void add_first(node::data_t d)
    {
        add(0, d);
    }


    void add_last(node::data_t d)
    {
        add(size(), d);
    }


    void remove_first()
    {
        remove(0);
    }

    void remove_last()
    {
        remove(size() - 1);
    }

    void remove(int n)
    {
	if(!head) return;
        if(n >= size()) return;
	if(n == 0 && size() == 1){
	    delete head;
	    head = NULL;
	    return;
	}
        node *tptr = head;
        node *delptr;
        
	if(n==0){
	    tptr = head;
	    head = tptr->next;
	    delete tptr;
	    return;
	}

        for(int i = 0; i < n - 1; i++) tptr = tptr->next;

        delptr = tptr->next;
        
        if(delptr->next) tptr->next = delptr->next;
	else tptr->next = NULL;

        delete delptr;

    }
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

