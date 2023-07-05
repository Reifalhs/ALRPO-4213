/*
Nama: Reifal Hafizh Satria
Nim: A11.2022.14473
Kelas: 4213
*/

#include <iostream>
using namespace std;

typedef struct mahasiswa{
    string nama;
    string nim;
    int score[5];
    void printData() {
        cout << "Nama :" << nama <<endl;
        cout << "Nim :" << nim <<endl;
        for(int i = 0; i < 5; i++) {
            cout << "Nilai " << i+1 << ":" << score[i] <<endl;
        }
    }
    void swapScore(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    float sumScore(int *arr, int leng) {
        if(leng == 0) {
            return arr[0];
        }
        return arr[leng] + sumScore(arr, leng-1);
    }

    void sorting(int *arr, int leng) {
        if(leng <= 0)
            return;

        for(int i = 0; i < leng-1; i++) {
            if(arr[i] > arr[i+1]) {
                swapScore(&arr[i], &arr[i+1]);
            }
        }

        sorting(arr, leng-1);
    }

}mahasiswa;

int main() {
    mahasiswa n1 = {"reifal", "A11.2022.14473", {90, 80, 75, 88, 69}};
    cout << "\nBefore" << endl;
    n1.printData();

    cout << "\nAfter" << endl;
    n1.swapScore(&n1.score[0], &n1.score[4]);
    n1.printData();

    int n = sizeof(n1.score)/sizeof(n1.score[0]);
    cout << "Rata-rata :" << n1.sumScore(n1.score, n)/n << endl;

    cout << "\nAfter sort" << endl;
    n1.sorting(n1.score, n);
    n1.printData();

    return 0;
}
