#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 12;
    int c = 5;
    cariBilanganTerbesar(a,b,c);
    return 0;
}

void cariBilanganTerbesar(int a, int b, int c){
    int terbesar = a;
    if(b > terbesar ){
        terbesar = b;
    }
    if (c > terbesar){
        terbesar = c;
    }
    cout << "Bilangan terbesar :" << terbesar << endl;
}
