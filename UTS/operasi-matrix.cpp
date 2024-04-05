#include <iostream>
#include <string>

using namespace std;

struct matrix {
    int** e;
};

int main(){
    struct matrix A, B, C;
    int N = 2;

    A.e = new int*[N];
    for (int i = 0; i < N; i++) {
        A.e[i] = new int[N];
    }
    A.e[0][0] = 1;
    A.e[0][1] = 2;
    A.e[1][0] = 3;
    A.e[1][1] = 4;

    B.e = new int*[N];
    for (int i = 0; i < N; i++) {
        B.e[i] = new int[N];
    }
    B.e[0][0] = 5;
    B.e[0][1] = 6;
    B.e[1][0] = 7;
    B.e[1][1] = 8;

    C.e = new int*[N];
    for (int i = 0; i < N; i++) {
        C.e[i] = new int[N];
    }

    cout << "Penjumlahan dari matriks A dan B adalah: " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            C.e[i][j] = A.e[i][j] + B.e[i][j];
            cout << C.e[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Pengurangan dari matriks A dan B adalah: " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            C.e[i][j] = A.e[i][j] - B.e[i][j];
            cout << C.e[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Perkalian dari matriks A dan B adalah: " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            C.e[i][j] = 0;
            for (int k = 0; k < N; k++){
                C.e[i][j] += A.e[i][k] * B.e[k][j];
            }
            cout << C.e[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        delete[] A.e[i];
    }
    delete[] A.e;

    for (int i = 0; i < N; i++) {
        delete[] B.e[i];
    }
    delete[] B.e;

    for (int i = 0; i < N; i++) {
        delete[] C.e[i];
    }
    delete[] C.e;

    return 0;
}