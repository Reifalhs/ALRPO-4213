#include <iostream>
using namespace std;

int jumlahRec(int a, int b);

int main() {
    int a,b;
    cout << "jumlahrek" << endl;
    cout << "masukkan nilai yang akan di jumlah... " << endl;
    cout << "nilai pertama : ";
    cin >> a;
    cout << "nilai kedua : ";
    cin >> b;
    cout << "Hasil : " << jumlahRec(a,b) << endl;
    return 0;
}

int jumlahRec(int a, int b) {
    if(b == 0) {
        return a;
    }else {
        return 1 + jumlahRec(a, b-1);
    }
}


