#include <iostream>
using namespace std;

typedef struct Data {
    string nim,nama,jurusan;
    int tahun;
}emp;

void printData(Data Arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Data " << i + 1 << ":" << endl;
        cout << "Nim : " << Arr[i].nim << endl;
        cout << "nama : " << Arr[i].nama << endl;
        cout << "tahun : " << Arr[i].tahun << endl;
        cout << endl;
    }
}



int main() {
    // Array Statis
    emp a[4] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "siti", "kesehatan", 1993},
    };

    int size = sizeof(a) / sizeof(a[0]);

    cout << "" << endl;
    printData(a, size);

    // Array Dinamis
    cout << "Masukkan jumlah data: ";
    cin >> size;

    // Alokasi dinamis memori untuk array
    emp* b = new emp[size];

    for (int i = 0; i < size; i++) {
        cout << "Masukkan data ke-" << i + 1 << ":" << endl;
        cout << "Nim : ";
        cin >> b[i].nim;
        cout << "Nama : ";
        cin >> b[i].nama;
        cout << "Jurusan : ";
        cin >> b[i].jurusan;
        cout << "Tahun : ";
        cin >> b[i].tahun;
        cout << endl;
    }

    cout << "" << endl;
    printData(b, size);

    // Dealokasi memori
    delete[] b;
    return 0;
}
