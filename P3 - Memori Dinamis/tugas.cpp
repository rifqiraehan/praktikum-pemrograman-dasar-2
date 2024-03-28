#include <iostream>
using namespace std;

int main() {
    float **A, **AT, **Cov;

    A = new float*[2];
    AT = new float*[3];
    Cov = new float*[2];

    for (int i = 0; i < 2; i++) {
        A[i] = new float[3];
        Cov[i] = new float[2];
    }

    for (int i = 0; i < 3; i++) {
        AT[i] = new float[2];
    }

    A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = 3;
    A[1][0] = 4;
    A[1][1] = 5;
    A[1][2] = 6;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            AT[j][i] = A[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            Cov[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                Cov[i][j] += A[i][k] * AT[k][j];
            }
        }
    }

    cout << "Matriks A:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks Transpose A:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << AT[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks Kovarian:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << Cov[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete[] A[i];
        delete[] Cov[i];
    }

    for (int i = 0; i < 3; i++) {
        delete[] AT[i];
    }

    delete[] A;
    delete[] AT;
    delete[] Cov;

    return 0;
}