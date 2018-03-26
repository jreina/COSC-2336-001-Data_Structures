
# PF3
## Lab 9        Quick Sort


Implement a quick sort on an array of integers.  The
array should be entered, one value at a time in response
to prompts to the user executing your program.  Accept 
a maximum of 100 numbers.  A value of -1 should cause 
your program to cease prompting for more and perform the
sortation.

Your program should produce output similar to mine to
allow me to verify the operation of your code.

```c++
int main(void)
{
    int ar[100];

    int i, v, len;

    for (i=0; i<100; i++) {
        cout << "enter a number (-1 to quit): ";
        cin >> v;

        if (v < 0) break;

        ar[i] = v;
    }

    len = i;

    cout << "main:  before sort:\n";
    for (i=0; i<len; i++) {
        cout << "main:  ar[" << i << "] = " << ar[i] << endl;
    }

    sort(ar, len);

    cout << "main:  after sort:\n";
    for (i=0; i<len; i++) {
        cout << "main:  ar[" << i << "] = " << ar[i] << endl;
    }
}
```

```bash
main:  ar[0] = 4
main:  ar[1] = 2
main:  ar[2] = 5
main:  ar[3] = 3
QUICKSORT CONSTRUCTOR: before sort, ll = 
    DUMP: (size = 4, first = 4, last = 3)
    DUMP:   head = : 4
    DUMP:   data = : 2
    DUMP:   data = : 5
    DUMP:   data = : 3

rquicksort: TOP: ll = 
    DUMP: (size = 4, first = 4, last = 3)
    DUMP:   head = : 4
    DUMP:   data = : 2
    DUMP:   data = : 5
    DUMP:   data = : 3

rquicksort: pivot = 3
rquicksort: lll =     DUMP: (size = 1, first = 2, last = 2)
    DUMP:   head = : 2

rquicksort: lle =     DUMP: (size = 1, first = 3, last = 3)
    DUMP:   head = : 3

rquicksort: llg =     DUMP: (size = 2, first = 4, last = 5)
    DUMP:   head = : 4
    DUMP:   data = : 5

calling recursively with llg...
rquicksort: TOP: ll = 
    DUMP: (size = 2, first = 4, last = 5)
    DUMP:   head = : 4
    DUMP:   data = : 5

rquicksort: pivot = 5
rquicksort: lll =     DUMP: (size = 1, first = 4, last = 4)
    DUMP:   head = : 4

rquicksort: lle =     DUMP: (size = 1, first = 5, last = 5)
    DUMP:   head = : 5

rquicksort: llg =     DUMP: (size = 0, first = -1, last = -1)
    DUMP: head = NULL

rquicksort: after recursive calls, concatenating...!
adding 4 from lll
adding 5 from lle
rquicksort: done concatenating, ll =     DUMP: (size = 2, first = 4, last = 5)
    DUMP:   head = : 4
    DUMP:   data = : 5

rquicksort: after recursive calls, concatenating...!
adding 2 from lll
adding 3 from lle
adding 4 from llg
adding 5 from llg
rquicksort: done concatenating, ll =     DUMP: (size = 4, first = 2, last = 5)
    DUMP:   head = : 2
    DUMP:   data = : 3
    DUMP:   data = : 4
    DUMP:   data = : 5

QUICKSORT CONSTRUCTOR: after sort,  ll = 
    DUMP: (size = 4, first = 2, last = 5)
    DUMP:   head = : 2
    DUMP:   data = : 3
    DUMP:   data = : 4
    DUMP:   data = : 5

main:  after sort:
main:  ar[0] = 2
main:  ar[1] = 3
main:  ar[2] = 4
main:  ar[3] = 5
```
