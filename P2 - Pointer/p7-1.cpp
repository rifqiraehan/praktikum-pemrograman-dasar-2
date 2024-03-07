#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // let us have array address in pointer.
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        // point to the next location
        ptr++;
    }
    return 0;
}

/**
 * Output:
 * Address of var[0] = 0x3ef7fffcf8
 * Value of var[0] = 10
 * Address of var[1] = 0x3ef7fffcfc
 * Value of var[1] = 100
 * Address of var[2] = 0x3ef7fffd00
 * Value of var[2] = 200
 */