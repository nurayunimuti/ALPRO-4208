#include <iostream>

using namespace std;

//Soal 2.Membuat Fungsi Rekursif Pengurangan

int penguranganRekursif(int x, int y){
    if(y==0){
        return x;
    }
    return penguranganRekursif(x-1, y-1);
}

int main()
{
    int x,y;
    cout << "Masukkan dua bilangan bulat = ";
    cin >> x >> y;
    int hasil = penguranganRekursif(x, y);
    cout << "Hasil pengurangan dari " << x << " - " << y << " adalah =" << hasil << endl;
    return 0;
}
