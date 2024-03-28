#include <iostream>
#include <string>

using namespace std;

struct matrix {
    int** e;
};

int main(){
    struct matrix A, B, C;
    int N;

    cout << "Masukkan ukuran matriks: ";
    cin >> N;
    cout << endl;

    // Allocate memory for matrix A
    A.e = new int*[N];
    for (int i = 0; i < N; i++) {
        A.e[i] = new int[N];
    }

    cout << "Masukkan elemen-elemen matriks A: " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> A.e[i][j];
        }
    }
    cout << endl;

    // Allocate memory for matrix B
    B.e = new int*[N];
    for (int i = 0; i < N; i++) {
        B.e[i] = new int[N];
    }

    cout << "Masukkan elemen-elemen matriks B: " << endl;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> B.e[i][j];
        }
    }
    cout << endl;

    // Allocate memory for matrix C
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

    // Deallocate memory for matrix A
    for (int i = 0; i < N; i++) {
        delete[] A.e[i];
    }
    delete[] A.e;

    // Deallocate memory for matrix B
    for (int i = 0; i < N; i++) {
        delete[] B.e[i];
    }
    delete[] B.e;

    // Deallocate memory for matrix C
    for (int i = 0; i < N; i++) {
        delete[] C.e[i];
    }
    delete[] C.e;

    return 0;
}