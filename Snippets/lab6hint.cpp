class heap {
  private:
    int count;
    int capacity;
    int *array;

  public:
    heap(int n)
    {
        count = 0;
        capacity = n;

        //cout << "HEAP:  Making a heap of size " << n << " elements\n";
        array = new int[n+1];
    }

NOTE:  to delete a pointer:   delete[] ptr;
