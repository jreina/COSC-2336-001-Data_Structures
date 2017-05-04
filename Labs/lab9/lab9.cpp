#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


void dump(int ar[], int first, int last)
{
    cout << "\nDUMP (indexes " << first << "-" << last << "):  [ ";
    for (int i=first; i<=last; i++)
    {
        cout << ar[i] << "  ";
    }
    cout << "]\n\n";
}

void rquicksort(int ar[], int start, int end)
{
    cout << "TOP OF RQUICKSORT ===================================\n";
    dump(ar, start, end);
    int pivot = ar[end];
    int left = start;
    int right = end - 1;
    int tmp;
    cout << "pivot = " << pivot << endl;

    while(left < right)
    {
        cout << "looping from left (starting at " << left << ") and from right (starting at " << right << ")\n";
        while(ar[left] <= pivot && left < end) left++;
        while(ar[right] > pivot && right > start) right--;

        cout << "looping done. left is now " << left << ", right is now " << right << endl;
        if(left >= right) break;
        cout << "swapping the " << ar[left] << " (at index " << left << ") and the "
        << ar[right] << " (at index " << right << ")." << endl;
        // swap
        tmp = ar[left];
        ar[left] = ar[right];
        ar[right] = tmp;

        left++;
        right--;

        dump(ar, start, end);
    }
    cout << "AFTER THE *OUTER* LEFT/RIGHT SCAN LOOP, left = " << left << " right = " << right << endl;

    // swap pivot with left
    if(ar[left] > pivot) {
    cout << "swapping the " << ar[left] << " (at index " << left << ") and the pivot "
        << ar[end] << " (at index " << end << ")." << endl;
    cout << "note that the pivot is now in its correct position.\n";
    
        tmp = ar[left];
        ar[left] = pivot;
        ar[end] = tmp;
    }

    dump(ar, start, end);

    if(left - 1 - start > 0) 
    {
        cout << "calling rquicksort with LESS THAN list, indexes " << start << "-" << left - 1 << endl;
        rquicksort(ar, start, left - 1);
    }
    if(end - 1 - left > 0) 
    {
        cout << "calling rquicksort with GREATER THAN list, indexes " << left + 1 << "-" << end << endl;
        rquicksort(ar, left + 1, end);
    }
}

void sort(int list[], int length)
{
    rquicksort(list, 0, length - 1);
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
