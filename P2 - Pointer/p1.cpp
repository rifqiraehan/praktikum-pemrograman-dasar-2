#include <iostream>
using namespace std;

int main()
{
    int var1;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;
    cout << "Address of var2 variable: ";
    cout << &var2 << endl;

    return 0;
}

/**
 * Output:
 * Address of var1 variable: 0x3c395ffe4c
 * Address of var2 variable: 0x3c395ffe42
 */