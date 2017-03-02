#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

template<class T> class node
{
  public:

    node *next;
    T data;

    node(T d) { next = NULL; data = d; }
};

template<class T> class linked_list
{
  private:
    node<T> *head;

  public:

    linked_list()
    {
        head = NULL;
    }

    T get(int n){
        if(n < size()){
            node<T> *tptr = head;
            for(int i = 0; i < n; i++) tptr=tptr->next;
            return tptr->data;
        }
        else return (T)0;
    }

    T get_first(){
        if(head) return head->data;
        else return (T)0;
    }

    T get_last(){
        if(head) {
            node<T> *ptr = head;
            while(ptr->next) ptr=ptr->next;
            return ptr->data;
        }
        else return (T)0;
    }

    int size()
    {
        node<T> *tptr = head;

        int c = 0;

        while(tptr)
        {
            c++;
            tptr = tptr->next;
        }

        return c;
    }

    void add(int index, T d)
    {
        int count = size();
        
        if(index > count || index < 0) return;
        if(index == 0) {
            node<T> *nhp = new node<T>(d);
            nhp->next = head;
            head = nhp;
        }
        else if(index == count) {
            node<T> *tptr = head;
            if (head == NULL)
            {
                head = new node<T>(d);
                return;
            }
            while (tptr->next != NULL) tptr = tptr->next;
            tptr->next = new node<T>(d);
        }
        else if(index < count) {
            node<T> *tptr = head;
            node<T> *nptr = new node<T>(d);
            for(int i = 0; i < index - 1; i++) {
                tptr = tptr->next;
            }
            nptr->next=tptr->next;
            tptr->next=nptr;
        }
    }

    void add_first(T d)
    {
        add(0, d);
    }


    void add_last(T d)
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
        node<T> *tptr = head;
        node<T> *delptr;
        
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
        node<T> *tptr;

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

template<class T> class stack
{
    private:
    linked_list<T> ll;
    T dtop;
    public:

    void push(T d)
    {
        ll.add_first(d);
        dtop = d;
    }
    T pop()
    {
        dtop = ll.get_first();
        if(ll.size() > 0) ll.remove_first();
        return dtop;
    }
    T top()
    {
        return ll.get_first();
    }
};

int main(void)
{
    stack<string> s;
    int n;
    string cmd;
    string d;

    while (cin >> cmd >> d) {

        cout << "MAIN: cmd = " << cmd << ", d = " << d << endl;

        if (cmd == "push")
            s.push(d);
        else if (cmd == "pop") {
            d = s.pop();
            cout << "MAIN: pop = " << d << endl;
        } else if (cmd == "top") {     // returns the value from top of stack,
            d = s.top();        // but DOES NOT REMOVE the item.
            cout << "MAIN: top = " << d << endl;
        } else if (cmd == "quit")
            exit(0);
    }
}
