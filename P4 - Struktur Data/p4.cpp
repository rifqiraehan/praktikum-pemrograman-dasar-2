#include <iostream>
#include <string>

using namespace std;

struct mahasiswa
{
    string nama;
    int no_id;
    string gender;
    string kelas;
};

int main()
{
    mahasiswa mhs[100];
    int i, jml_mhs;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jml_mhs;

    // ===== Memasukkan data-data mahasiswa ===== //
    for (i = 1; i <= jml_mhs; i++)
    {
        cout << "Mahasiswa ke-" << i << " : " << endl;
        cout << "Nama : ";
        cin >> mhs[i].nama;
        cout << "No Id : ";
        cin >> mhs[i].no_id;
        cout << "Gender : ";
        cin >> mhs[i].gender;
        cout << "Kelas : ";
        cin >> mhs[i].kelas;

        cout << endl << endl;
    }

    // ===== Mencetak data-data mahasiswa ===== //
    for (i = 1; i <= jml_mhs; i++)
    {
        cout << "Mahasiswa ke-" << i << " : " << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "No Id : " << mhs[i].no_id << endl;
        cout << "Gender : " << mhs[i].gender << endl;
        cout << "Kelas : " << mhs[i].kelas << endl;

        cout << endl << endl;
    }

    return 0;
}