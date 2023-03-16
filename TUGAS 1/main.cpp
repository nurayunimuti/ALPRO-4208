#include <iostream>
/* Nama Nurayuni Kirana Muti    - A11.2022.14315
kelas 4208
 */

using namespace std;

int tambah(int a, int b){
    int t;
    t = a + b;
    return t;
}

int kurang(int m, int n){
    int k;
    k = m - n;
    return k;
}

int total(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

double rataRata(int array[], int p){
    int sum = 0;
    for (int i = 0; i < p; i++){
        sum += array[i];
    }
    return (double)sum / p;
}

int main()
{
    /* Tugas 1 Alpro

    1. Pertambahan 2 bilangan
    2. Pengurangan 2 bilangan
    3. Total Value elemen dalam Array
    4. Rata- rata elemen Array*/

    // Soal pertambahan 2 bilangan

    int a = 5;
    int b = 9;
    cout << "Hasil pertambahan dari 15 + 9 = " << tambah(a , b) << endl;


    // Soal Pengurangan 2 bilangan

    int m = 20;
    int n = 9;
    cout << "Hasil pengurangan dari 20 - 9 = " << kurang(m , n) << endl;


    // Soal Total Value elemen dalam Array

    int arr[] = {11, 12, 13, 14, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int hasil = total(arr, size);
    cout << " Total value elemen dalam array adalah = " << hasil << endl;

    // Soal Rata-rata elemen Array

    int array[] = {16, 17, 18, 19, 20};
    int p = sizeof(arr) / sizeof(arr[0]);
    double average = rataRata(array, p);
    cout << "Rata-rata elemen dalam array adalah = " << average << endl;
    return 0;
}
