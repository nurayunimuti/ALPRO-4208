#include <iostream>
/* Nama Nurayuni Kirana Muti    - A11.2022.14315
Kelas 4208
*/


using namespace std;

int sumEven(int a[], int n){
    int sum = 0;
    for(int i = 0; i< n; i++){
        if(a[i] % 2 == 0){
            sum += a[i];
        }
    }
    return sum;
}

int sumOdd(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] % 2 != 0){
            sum += arr[i];
        }
    }
    return sum;
}

int maxN(int a, int b) {
   if(a > b) {
      return a;
   }
   else {
      return b;
   }
}

int minN(int c, int d) {
   if(a < b) {
      return c;
   }
   else {
      return d;
   }
}

// fungsi maxArray
int maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int minArray(int arr[], int size) {
    int min = arr[0]; //inisialisasi nilai minimum dengan elemen pertama dari array
    for(int i = 1; i < size; i++) {
        if(arr[i] < min) { //jika elemen ke-i lebih kecil dari nilai minimum
            min = arr[i]; //ubah nilai minimum menjadi elemen ke-i
        }
    }
    return min; //kembalikan nilai minimum
}

bool isFound(int x, int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}

void swapN(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Setelah ditukar: a = " << a << ", b = " << b << endl;
}




int main()
{
    /* TUGAS 2 ALPRO

    1. bool isEven(int x);
    2. bool isOdd(int x);
    3. bool isFactor(int x, int f);
    4. int sumEven(int a[])
           sumOdd
           MaxN
           MinN
           MaxArray
           MinArray
    bool isFound(int x, int a[])
    void swapN(int a, int b) */


    // 1. bool isEven (int x); -> Nilai true jika x bil.Genap,
                                //Nilai false jika x bil.Ganjil

    bool isEven(int x){
        return (x % 2 == 0) ? true : false;
    }

    int num = 5;
    if (isEven(num)){
        cout << num << " adalah bilangan ganjil " << endl;
    } else {
        cout << num << " adalah bilangan genap " << endl;
    }

    // 2. bool isOdd (int x); -> Nilai true jika ganjil
                               //Nilai false jika genap

    bool is0dd(int x{
        return (x % 2 ! = 0);
    }


    // 3. bool isFactor (int x, int f); -> Nilai true jika f merupakan faktor dari "x"
                                        // Nilai false jika f bukan faktor dari "x"

    bool isFactor(int x, int f){
         return (x % f == 0)
        }


    // 4. int sumEven (int a[]) -> Menghitung jumlah bilangan genap dalam sebuah Array

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int hasil = sumEven(arr, n);
    cout << " jumlah bilangan genap dalam Adalah = " << hasil << endl;
    return 0;


    //sumOdd

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int hasil = sumOdd(arr, size);
    cout << "Jumlah bilangan ganjil dalam Array adalah = " << hasil << endl;

    //MaxN

    int x = 10;
    int y = 20;
    int maks = maxN(x, y);
    cout << "Nilai maksimum adalah = " << maks << endl;

    //minN
    int p = 40;
    int q = 15;
    int min = minN(p, q);
    cout << "Nilai minimum adalah =" << min << endl;

    //maxArray

    int arr[] = {10, 5, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxVal = maxArray(arr, size);
    cout << "Nilai maksimum dari array adalah = " << maxVal << endl;

    //minArray

    int arr[] = {5, 3, 9, 1, 7}; //deklarasi array
    int size = sizeof(arr)/sizeof(arr[0]); //hitung jumlah elemen di dalam array
    int minValue = minArray(arr, size); //panggil fungsi minArray
    cout << "Nilai terkecil di dalam array = " << minValue << endl; //tampilkan nilai terkecil

    //bool isFound(int x, int a[])

    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 3;
    if (isFound(x, a, n)) {
        cout << "Nilai " << x << " ditemukan pada array." << endl;
    } else {
        cout << "Nilai " << x << " tidak ditemukan pada array." << endl;
    }


    //void swapN (int a, int b)

    int x = 10;
    int y = 20;
    cout << "Sebelum ditukar: x = " << x << ", y = " << y << endl;
    swapN(x, y);
    cout << "Setelah fungsi dipanggil: x = " << x << ", y = " << y << endl;
    return 0;
}







