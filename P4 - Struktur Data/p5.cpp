#include <iostream>
#include <string>

using namespace std;

struct anatomi
{
    string media_gerak;
    int jml;
};

struct pola_hidup
{
    string cara_bergerak;
    struct anatomi gerak;
    string cara_berkembangbiak;
};

struct jenis
{
    string nama;
    struct pola_hidup ph;
};

int main() // changed to int main()
{
    struct jenis makhluk[100];
    int i, jml;
    cout << "Masukkan jumlah makhluk : ";
    cin >> jml;

    // ===== Memasukkan data-data makhluk ===== //
    for (i = 1; i <= jml; i++)
    {
        cout << "Masukkan nama makhluk : ";
        cin >> makhluk[i].nama;
        cout << "Masukkan cara bergeraknya : ";
        cin >> makhluk[i].ph.cara_bergerak;
        cout << "Dengan media apa makhluk tersebut bergerak : ";
        cin >> makhluk[i].ph.gerak.media_gerak;
        cout << "Berapa jumlah kaki/sirip/sayap makhluk tersebut : ";
        cin >> makhluk[i].ph.gerak.jml;
        cout << "Dengan cara apa makhluk berkembangbiak : ";
        cin >> makhluk[i].ph.cara_berkembangbiak;
        cout << "\n";
    }
    cout << "\n\n";

    // ===== Mencetak data-data makhluk ===== //
    for (i = 1; i <= jml; i++)
    {
        cout << "Nama makhluk : " << makhluk[i].nama << endl;
        cout << "Cara bergerak dengan " << makhluk[i].ph.cara_bergerak << endl;
        cout << "Media makhluk tersebut bergerak : " << makhluk[i].ph.gerak.media_gerak << endl;
        cout << "Jumlah kaki/sirip/sayap makhluk tersebut : " << makhluk[i].ph.gerak.jml << endl;
        cout << "Cara makhluk berkembangbiak : " << makhluk[i].ph.cara_berkembangbiak << endl;
        cout << "\n";
    }

    return 0;
}