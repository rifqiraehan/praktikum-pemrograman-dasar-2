#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int i, j;
    int ROW = 5;
    int COL = 8;
    double *pvalue = new double[ROW * COL]; // Allocate memory for the 1-dimensional array

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            pvalue[i * COL + j] = 0.1;
            printf("%.2f\t", pvalue[i * COL + j]);
        }
        printf("\n");
    }

    delete[] pvalue;

    Sleep(5000);
}