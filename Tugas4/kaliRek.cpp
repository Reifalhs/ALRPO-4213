#include <iostream>
using namespace std;

int kaliRec(int a, int b);

int main() {
    int a,b;
    cout << "kalirek" << endl;
    cout << "masukkan nilai yang akan di kalikan... " << endl;
    cout << "nilai pertama : ";
    cin >> a;
    cout << "nilai kedua : ";
    cin >> b;
    cout << "Hasil : " << kaliRec(a,b) << endl;
    return 0;
}

int kaliRec(int a, int b) {
    if(b == 0) {
        return 0;
    }else {
        return a + kaliRec(a,b-1);
    }
}
