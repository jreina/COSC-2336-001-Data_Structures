#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void sort(int *ar, int length)
{
    if(length == 1||length == 0) return;

    cout << "BREAKING DOWN:" << endl;
    for (int i=0; i<length; i++)
        cout << "    DUMP:  data = : " << ar[i] << endl;

    int list1len = length/2,
        list2len = length - (length/2);
    int list1[list1len],
        list2[list2len];

    for(int i = 0; i < list2len; i++) list2[i] = ar[i + list1len];
    for(int i = 0; i < list1len; i++) list1[i] = ar[i];

    cout << "left =" << endl;
    for(int i = 0; i < list1len; i++)
        cout << "   DUMP:  data = : " << list1[i] << endl;

    cout << "right =" << endl;
    for(int i = 0; i < list2len; i++)
        cout << "   DUMP:  data = : " << list2[i] << endl;
    sort(list1, list1len);
    sort(list2, list2len);

    // Merge
    int index1 = 0,
        index2 = 0;
    while(index1 + index2 < length)
    {
        if(list1[index1] < list2[index2]) {
            if(index1 < list1len) {
                ar[index1 + index2] = list1[index1];
                index1++;
            } else {
                ar[index1 + index2] = list2[index2];
                index2++;
            }
        }
        else {
            if(index2 < list2len) {
                ar[index1 + index2] = list2[index2];
                index2++;
            } else {
                ar[index1 + index2] = list1[index1];
                index1++;
            }
        }
    }
    cout << "MERGED: list:" << endl;
    for (int i=0; i<length; i++)
        cout << "    DUMP:  data = : " << ar[i] << endl;
}

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

