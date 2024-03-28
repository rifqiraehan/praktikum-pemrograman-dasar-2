#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    double *pvalue = NULL; // Pointer initialized with null
    pvalue = new double;   // Request memory for the variable
    *pvalue = 29494.99;    // Store value at allocated address
    cout << "Value of pvalue : " << *pvalue << endl;
    delete pvalue; // free up the memory.

    _sleep(5000);
}
