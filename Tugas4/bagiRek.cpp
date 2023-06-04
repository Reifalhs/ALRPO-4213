#include <iostream>

using namespace std;

int bagiRec(int a, int b);

int main() {
    int a,b;
    cout << "bagirek" << endl;
    cout << "masukkan nilai yang akan di bagikan... " << endl;
    cout << "nilai pertama : ";
    cin >> a;
    cout << "nilai kedua : ";
    cin >> b;
    cout << "Hasil : " << bagiRec(a,b) << endl;
    return 0;
}

int bagiRec(int a, int b) {
    if(a<b) {
        return 0;
    }else {
        return 1 + bagiRec(a-b,b);
    }
}
