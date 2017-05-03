#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class heap
{
  private:
    int *array;
    int capacity;
    int count;

    // Double the size of the tree
    void _grow() {
      int* tmpAr = array;
      capacity *= 2;
      array = new int[capacity + 1];
      for(int i = 1; i <= count; i++)
      {
        array[i] = tmpAr[i];
      }
      delete[] tmpAr;
    }

    // Reheapify down the tree
    void _reheapifyd() {
      int left, right, parent, tparent;
      bool hasRightChild;

      for(int n = 1; n <= count/2; n++)
      {
        hasRightChild = (2 * n) + 1 <= count;
        parent = array[n];
        if(hasRightChild) right = array[(2 * n) + 1];
        else right = -1;
        left = array[2 * n];
        if(left > parent || right > parent) {
          tparent = array[n];
          if(left >= right) {
            array[n] = left;
            array[2 * n] = tparent;
          } else if (hasRightChild) {
            array[n] = right;
            array[(2 * n) + 1] = tparent;
          }
        } else break;
      }
    }

    // Reheapify up the tree
    void _reheapifyu() {
      int left, right, parent, tparent;
      bool hasRightChild;

      for(int n = count / 2; n >= 1; n--)
      {
        hasRightChild = !((2 * n) + 1 > count);
        parent = array[n];
        if(hasRightChild) right = array[(2 * n) + 1];
        left = array[2 * n];

        if(left > parent || (hasRightChild && right > parent)) {
          tparent = array[n];
          if(left >= right || !hasRightChild) {
            array[n] = left;
            array[2 * n] = tparent;
          } else if (hasRightChild) {
            array[n] = right;
            array[(2 * n) + 1] = tparent;
          }
        }
      }
    }

  public:
    heap(int cap)
    {
      array = new int[cap + 1];
      capacity = cap;
      count = 0;
    }

    void put(int priority) {
      if(count == capacity) _grow();
      array[count + 1] = priority;
      count++;
      _reheapifyu();
    }

    int pop() {
      if(count == 0) return -1;
      int top = array[1];
      array[1] = array[count];
      array[count] = 0;
      count--;
      _reheapifyd();
      return top;
    }

    void dump()
    {
        for (int i=1; i<= count; i++) {
            cout << "    DUMP: node at index [" << i << "] = " << array[i] << endl;
        }
        cout << endl;
    }
};

int main(void)
{
    heap myheap(4);

    string cmd;
    int d;

    while (cin >> cmd >> d) {

        cout << "MAIN: cmd = " << cmd << ", d = " << d << endl;

        if (cmd == "put") {
            myheap.put(d);
        } else if (cmd == "pop") {
            int i = myheap.pop();
            cout << "pop returns: " << i << endl;
        } else if (cmd == "dump")
            myheap.dump();
        else if (cmd == "quit")
            exit(0);
    }
}

