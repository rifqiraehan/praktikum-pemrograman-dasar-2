#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{
    string nama;
    string ttl;
    string alamat;
    string gender;
    int  berat_badan;
    // continue the rest of the fields

};

int main(){
    Mahasiswa mhs[3];

    mhs[0].nama = "Aldi";
    mhs[0].ttl = "Jakarta, 1 Januari 2000";
    mhs[0].alamat = "Jl. Jalan";
    mhs[0].berat_badan = 60;

    // print data
    cout << "Nama: " << mhs[0].nama << endl;
    cout << "TTL: " << mhs[0].ttl << endl;
    cout << "Alamat: " << mhs[0].alamat << endl;

    return 0;
}
