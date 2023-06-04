#include <iostream>

using namespace std;

int pangkatRec(int a, int b);

int main() {
    int a,b;
    cout << "pangkatrek" << endl;
    cout << "nilai yang akan di pangkatkan : ";
    cin >> a;
    cout << "pangkat : ";
    cin >> b;
    cout << "Hasil : " << pangkatRec(a,b) << endl;
    return 0;
}

int pangkatRec(int a, int b) {
    if(b == 0) {
        return 1;
    }else {
        return a * pangkatRec(a,b-1);
    }
}
