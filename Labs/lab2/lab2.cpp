#include <iostream>

using namespace std;

int size()
{
    node *tptr = head;

    int c = 0;

    while(tptr)   // or tptr->next
    {
        c++;
        tptr = tptr->next;
    }

    return c;
}


void add_first(node::data_t d)
{
    //add(0, d);

    node *nhp = new node(d);

    nhp->next = head;

    head = nhp;
}


void add_last(node::data_t d)
{
    //add(size(), d);

    node *tptr = head;

    if (head == NULL)
    {
        head = new node(d);
        return;
    }

    while (tptr->next != NULL) tptr = tptr->next;

    tptr->next = new node(d);
}


void remove_first()
{
    <snip>


    // one or more nodes
    node *tptr = head->next;
    delete head;
    head = tptr;
}

void remove()
{
    node *tptr;
    node *delptr;

    <snip>
    
    delptr = tptr->next;
    
    tptr->next = delptr->next;

    delete delptr;
}
