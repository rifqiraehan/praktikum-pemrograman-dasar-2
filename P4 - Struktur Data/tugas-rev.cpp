/**
 * Buatlah sebuah program untuk menghitung penjumlahan, pengurangan dan perkalian matriks dengan menggunakan struktur data.
•	Struktur data digunakan untuk mendefinisikan elemen matriks 2 dimensi.
•	Nama obyek dari struktur data adalah A untuk matriks pertama, B untuk matriks kedua, dan C untuk matriks hasil.
•	Ukuran matriks adalah NxN, dimasukkan dari pertanyaan di awal program berjalan.
•	Nilai-nilai elemen matriks dimasukkan setelah mengisi ukuran matriks.

*/

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

    return 0;

}