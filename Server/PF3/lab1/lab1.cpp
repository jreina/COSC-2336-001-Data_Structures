#include <iostream>

/*
 * PF3
 *
 *  Put your solution to this lab in ~/PF3/lab1/lab1.cpp
 *
 *  NOTE:  In your output statements, display not only
 *  the requested data, but also show how the value was
 *  passed to cout.  For instance, if asked to display
 *  the value of the variable "j", your print statement
 *  should look like
 *
 *
 *      cout << "j = " << j << endl;
 *
 *  If you have to insert '&' or '*' in front of any varible
 *  to satisfy the output request, put the symbol in the string
 *  literal so that I can see what you did from your output.
 */

using namespace std;

void print_an_int(int anInt)
{
    cout << "print_an_int: anInt = " << anInt << endl;
}

int main(void)
{
    // 1) declare an int variable "i"
    int i;

    // 2) initialize the variable "i" to 12
    i = 12;

    // 3) display the value of the variable "i"
    cout << "i = " << i << endl;

    // 4) display the address of the variable "i"
    cout << "&i = " << &i << endl;

    // 5) declare a variable "ip" that is a pointer to an int
    int* ip;

    // 6) "point" the pointer, "ip" to the int variable "i".
    ip = &i;

    // 7) display the value of the variable "ip"
    cout << "ip = " << ip << endl;

    // 8) display the value that "ip" is pointing to
    cout << "*ip = " << *ip << endl;

    // 9) assign the value that variable that "ip" is pointing to to 34
    *ip = 34;

    // 10) display the value of the variable "i"
    cout << "i = " << i << endl;

    // 11) DEFINE a structure named mystruct that will store two 
    //    ints ("i" and "j")
    struct mystruct
    {
        int i;
        int j;
    };

    // 12) DECLARE a structure of type mystruct named "data"
    mystruct data;

    // 13) Assign member "i" of data to to 56
    data.i = 56;

    // 14) declare a pointer to a "struct mystruct" named "sp"
    mystruct* sp;

    // 15) point the pointer "sp" at data
    sp = &data;

    // 16) using the pointer "sp", print out the value of member "i" in "data"
    cout << "data.i = " << data.i << endl;
    
    // 17) using the pointer "sp", assign member "j" to 78
    sp->j = 78;

    // 18) print out the value of member "j" in structure "data"
    cout << "data.j = " << data.j << endl; 

    // 19) pass member "i" of data to "print_an_int()"
    print_an_int(data.i);

    // 20) pass member "i" of data to "print_an_int() via the pointer "sp"
    print_an_int(sp->i);

    // 21) DEFINE a structure name mystruct2 that contains an int
    //    variable "count", and an array of ints (5 members) named "myarray"
    struct mystruct2
    {
        int count;
        int myarray[5];
    };

    // 22) DECLARE a structure of type mystruct2 named "data2"
    mystruct2 data2;

    // 23) assign the first element (index 0) of "myarray" in "data2" to 90
    data2.myarray[0] = 90;

    // 24) declare a pointer to a "stuct mystruct2" name "sp2"
    mystruct2* sp2;

    // 25) point the pointer "sp2" to data2.
    sp2 = &data2;

    // 26) using pointer "sp2", pass the first element in "myarray" to
    //    the function "print_an_int()"
    print_an_int(sp2->myarray[0]);

    // 27) set the "ip" (int) pointer from above to point at the
    //    first element in myarray, using data2.
    ip = &(data2.myarray[0]);

    // 28) print the value that "ip" is pointing to.
    cout << "*ip = " << *ip << endl;

    // 29) assign the second element (index 1) of "myarray" in "data2" to 91
    data2.myarray[1] = 91;

    // 30) display the value of the (pointer) variable "ip"
    cout << "ip = " << ip << endl;

    // 31) add one to "ip".
    *ip++;

    // 32) display the value of the variable "ip"
    cout << "ip = " << ip << endl;

    // (COMPARE THE PREVIOUS VALUE OF "ip" TO THE CURRENT VALUE!)

    // 33) print the value that "ip" is pointing to.
    cout << "*ip = " << *ip << endl;
}

