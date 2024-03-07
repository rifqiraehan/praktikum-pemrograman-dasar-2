#include <iostream>
using namespace std;

const int MAX = 4;

int main()
{
    // adding const before char for read-only memory
    const char *names[MAX] = {
        "Irsyad Alkais",
        "Nabil Falah",
        "Fransisca Najwa",
        "Rifqi Raehan",
    };
    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = ";
        cout << names[i] << endl;
    }
    return 0;
}

/**
 * Output:
 * Value of names[0] = Irsyad Alkais
 * Value of names[1] = Nabil Falah
 * Value of names[2] = Fransisca Najwa
 * Value of names[3] = Rifqi Raehan
 */