#include <iostream>

using namespace std;

int main(){

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int c[2][2];
    int i, j, k;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            c[i][j] = 0;
            for (k = 0; k < 2; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            cout << a[i][j] << " ";
        }
        cout << "\t";

        for (j = 0; j < 2; j++){
            cout << b[i][j] << " ";
        }
        cout << "\t";

        for (j = 0; j < 2; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}







