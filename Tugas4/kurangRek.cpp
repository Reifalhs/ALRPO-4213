#include <iostream>
using namespace std;

int kurangRec(int a, int b);

int main() {
    int a,b;
    cout << "kurangrek" << endl;
    cout << "masukkan nilai yang akan di kurangkan... " << endl;
    cout << "nilai pertama : ";
    cin >> a;
    cout << "nilai kedua : ";
    cin >> b;
    cout << "Hasil : " << kurangRec(a,b) << endl;
    return 0;
}

int kurangRec(int a, int b) {
    if(b == 0) {
        return a;
    }else {
        return kurangRec(a-1, b-1);
    }
}
