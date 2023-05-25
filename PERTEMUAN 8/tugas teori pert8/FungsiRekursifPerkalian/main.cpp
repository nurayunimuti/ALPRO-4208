#include <iostream>

using namespace std;
// Soal 3.Membuat Fungsi Rekursif Perkalian

int perkalianRekursif(int a, int b) {
    // Basis: Jika salah satu bilangan adalah 0, langsung mengembalikan 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // Rekurens: Mengembalikan a ditambah dengan perkalianRekursif(a, b-1)
    return a + perkalianRekursif(a, b - 1);
}

int main() {
    int a, b;
    cout << "Masukkan dua bilangan bulat: ";
    cin >> a >> b;
    int hasil = perkalianRekursif(a, b);
    cout << "Hasil perkalian " << a << " * " << b << " adalah = " << hasil << endl;

    return 0;
}
