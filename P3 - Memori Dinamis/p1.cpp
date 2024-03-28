#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    double *pvalue = NULL;

    if (!(pvalue = new double))
    {
        cout << "Error: out of memory." << endl;
        exit(1);
    } else {
        cout << "Memory allocated." << endl;
        cout << "Address: " << pvalue << endl;
        cout << "Value: " << *pvalue << endl;
    }

    Sleep(5000);
}