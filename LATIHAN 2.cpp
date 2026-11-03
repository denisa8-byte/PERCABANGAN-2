#include <iostream>
using namespace std;

int main()
{
    char nama[50];
    int tinggi;

    cout << "  PROGRAM KATEGORI TINGGI BADAN" << endl;
    cout << "====================================" << endl;

    cout << "Masukkan Nama          : ";
    cin.getline(nama, 50);

    cout << "Masukkan Tinggi (cm)   : ";
    cin >> tinggi;

    cout << endl;
    cout << "====================================" << endl;
    cout << "          HASIL PEMERIKSAAN" << endl;

    cout << "Nama         : " << nama << endl;
    cout << "Tinggi Badan : " << tinggi << " cm" << endl;

    if (tinggi >= 100)
    {
        if (tinggi >= 170)
        {
            cout << "Kategori     : Tinggi" << endl;
            cout << "Keterangan   : Memiliki badan yang tinggi" << endl;
        }
        else
        {
            if (tinggi >= 160)
            {
                cout << "Kategori     : Sedang" << endl;
                cout << "Keterangan   : Memiliki tinggi badan sedang" << endl;
            }
        }
    }

    cout << "====================================" << endl;
    cout << "          PROGRAM SELESAI" << endl;

    return 0;
}
