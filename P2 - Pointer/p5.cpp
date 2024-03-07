#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // let us have address of the last element in pointer.
    ptr = &var[MAX - 1];
    for (int i = MAX; i > 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        // point to the previous location
        ptr--;
    }
    return 0;
}

/**
 * Output:
 * Address of var[3] = 0x36979ffe50
 * Value of var[3] = 200
 * Address of var[2] = 0x36979ffe4c
 * Value of var[2] = 100
 * Address of var[1] = 0x36979ffe48
 * Value of var[1] = 10
 */