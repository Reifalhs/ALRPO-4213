#include <iostream>
using namespace std;

//task function
int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int jumlahTotalArray(int lenght);
float rataRataArray(float jumlah, float lenght);

//my function
int myFunction(int i, string konteks);

int main() {

     int nilai1, nilai2;
//1. penjumlahan dua bilangan

    nilai1 = myFunction(0, "jumlahkan");
    nilai2 = myFunction(1, "jumlahkan");

    cout << "Hasil: " << penjumlahan(nilai1, nilai2) << endl << endl;
//end penjumlahan

//2. pengurangan dua bilangan

    nilai1 = myFunction(0, "kurangkan");
    nilai2 = myFunction(1, "kurangkan");

    cout << "Hasil: " << pengurangan(nilai1, nilai2) << endl << endl;
//end pengurangan

//3.Mehitung jumlah nilai Array
    int lenght;

    cout << "|| Mehitung jumlah nilai Array||" << endl;
    cout << "Masukkan panjang Array :";
    cin >> lenght;

    int total = jumlahTotalArray(lenght);
    cout << "Jumlah:" << total << endl;
//end jumlah array

//4. Mehitung rata-rata array

    cout << "Rata-rata:" << rataRataArray(total, lenght);

//end rata-rata array
    return 0;
}

//task function
int penjumlahan(int a, int b) {
    return a + b;
}

int pengurangan(int a, int b) {
    return a - b;
}

int jumlahTotalArray(int lenght) {
    int arr[lenght];
    int total = 0;

    cout << "masukkan " << lenght << " nilai isi array..." << endl;
    for(int i = 1; i <= lenght; i++) {
        cout << "nilai ke-" << i << ":";
        cin >> arr[i];

        total = total + arr[i];
    }
    return total;
}

float rataRataArray(float jumlah, float lenght) {
    return jumlah / lenght;
}


//my function
int myFunction(int i, string konteks) {
    int nilai1, nilai2;

    if(i == 0) {
        cout << "Masukkan nilai yang akan di " << konteks << endl;
        cout << "Nilai pertama :";
        cin >> nilai1;
    }else {
        cout << "Nilai kedua :";
        cin >> nilai2;
    }

    int result[2] = {nilai1, nilai2};
    return result[i];
}
