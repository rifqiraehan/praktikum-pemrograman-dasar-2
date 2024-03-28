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
    double **pvalue = new double *[ROW]; // Allocate memory for rows

    // Now allocate memory for columns
    for (i = 0; i < ROW; i++)
    {
        pvalue[i] = new double[COL];
    }

    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            pvalue[i][j] = 0.1;
            printf("%.2f\t", pvalue[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < ROW; i++)
    {
        delete[] pvalue[i];
    }
    delete[] pvalue;

    Sleep(5000);
}