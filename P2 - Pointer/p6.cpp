#include <iostream>
using namespace std;
const int MAX = 3;
int main()
{
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // let us have address of the first element in pointer.
    ptr = var;
    int i = 0;
    while (ptr <= &var[MAX - 1])
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        // point to the previous location
        ptr++;
        i++;
    }
    return 0;
}

/**
 * Output:
 * Address of var[0] = 0xb3639ffa28
 * Value of var[0] = 10
 * Address of var[1] = 0xb3639ffa2c
 * Value of var[1] = 100
 * Address of var[2] = 0xb3639ffa30
 * Value of var[2] = 200
 */