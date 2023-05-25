#include <iostream>

using namespace std;

//Soal 4.Fungsi Rekursif Pembagian

int pembagianRekursif(int y, int z) {
    // Basis: Jika y lebih kecil dari z, langsung mengembalikan 0
    if (y < z) {
        return 0;
    }
    // Rekurens: Mengembalikan 1 ditambah dengan pembagianRekursif(y - z, z)
    return 1 + pembagianRekursif(y - z, z);
}

int main() {
    int y, z;
    cout << "Masukkan dua bilangan bulat = ";
    cin >> y >> z;
    int hasil = pembagianRekursif(y, z);
    cout << "Hasil pembagian " << y << " / " << z << " adalah = " << hasil << endl;

    return 0;
}


