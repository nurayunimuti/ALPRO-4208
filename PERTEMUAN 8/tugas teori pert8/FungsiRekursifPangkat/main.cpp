#include <iostream>

using namespace std;
//Soal 5.Fungsi Rekursif Pangkat

int pangkatRekursif(int basis, int pangkat) {
    // Basis: Jika pangkat = 0, langsung mengembalikan 1
    if (pangkat == 0) {
        return 1;
    }
    // Rekurens = Mengembalikan hasil perkalian basis dengan pangkatRekursif(basis, pangkat-1)
    return basis * pangkatRekursif(basis, pangkat - 1);
}

int main() {
    int basis, pangkat;
    cout << "Masukkan basis: ";
    cin >> basis;
    cout << "Masukkan pangkat: ";
    cin >> pangkat;
    int hasil = pangkatRekursif(basis, pangkat);
    std::cout << "Hasil pangkat " << basis << "^" << pangkat << " adalah = " << hasil << endl;

    return 0;
}


