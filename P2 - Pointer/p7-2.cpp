#include <iostream>
using namespace std;

const int MAX = 3;

int main()
{
    int var[MAX] = {10, 100, 200};
    for (int i = 0; i < MAX; i++)
    {
        *var = i; // This is a correct syntax
        // var++;    // This is incorrect.

        // adding the lines
        cout << "Value of var[" << i << "] = ";
        cout << *var << endl;
    }
    return 0;
}

/**
 * Output:
 * Value of var[0] = 0
 * Value of var[1] = 1
 * Value of var[2] = 2
 */