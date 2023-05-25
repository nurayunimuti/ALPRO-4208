#include <iostream>

using namespace std;

// Soal 1.Membuat Fungsi Rekursif Penjumlahan

int penjumlahanRekursif(int n){
    if(n==0){
        return 0;
    }
    return n + penjumlahanRekursif(n-1);
}

int main()
{
    int n;
    cout << "Masukkan bilangan bulat positif = ";
    cin >> n;
    int hasil = penjumlahanRekursif(n);
    cout << "Hasil Penjumlahan dari angka 1 sampai " << n << "adalah = " << hasil << endl;
    return 0;
}
