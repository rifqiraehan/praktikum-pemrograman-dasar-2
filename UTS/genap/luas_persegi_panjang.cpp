#include <iostream>

using namespace std;

void luas(int *panjang, int *lebar){
    int hasil = *panjang * *lebar;
    cout << "Luas persegi panjang adalah: " << hasil << endl;
}

int main(){
    int panjang, lebar;
    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;

    luas(&panjang, &lebar);

    return 0;
}