#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa{
    string nama;
    string ttl;
    string alamat;
    int berat_badan;

    // continue the rest of the fields
};

int main(){
    // use pointer to struct
    Mahasiswa* mhs = new Mahasiswa;

    // mhs 1
    mhs->nama = "Aldi";
    mhs->ttl = "Jakarta, 1 Januari 2000";
    mhs->alamat = "Jl. Jalan";

    // print data
    cout << "Nama: " << mhs->nama << endl;
    cout << "TTL: " << mhs->ttl << endl;
    cout << "Alamat: " << mhs->alamat << endl;

    return 0;
}
