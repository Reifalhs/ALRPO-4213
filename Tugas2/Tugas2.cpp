#include <iostream>
using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
int maxArray(int arr[], int lenght);
int minArray(int arr[], int lenght);
int isMax(int a, int b);
int isMin(int a, int b);
int sumEven(int arr[], int lenght);
int sumOdd(int arr[], int lenght);
bool isFound(int arr[], int lenght, int x);
void swapp(int a, int b);

//my func
string cBool(bool x);


int main() {
    int pilih;

    cout << "Program tugas 2 alpro : " << endl;
    cout << "1. is even" << endl;
    cout << "2. is odd" << endl;
    cout << "3. is factor" << endl;
    cout << "4. max array" << endl;
    cout << "5. min array" << endl;
    cout << "6. is max" << endl;
    cout << "7. is min" << endl;
    cout << "8. sum even" << endl;
    cout << "9. sum odd" << endl;
    cout << "10. is found" << endl;
    cout << "11. swapp" << endl;
    cout << "silakan pilih program di atas : ";
    cin >> pilih;
    if(pilih == 1) {
        // 1. isEven
        int even;
        cout << "1. is even" << endl;
        cout << "Masukkan nilai: ";
        cin >> even;
        cout << "Hasil : " << cBool(isEven(even)) << endl;
    }else if(pilih == 2) {
        // 2. isOdd
        int odd;
        cout << "2. is odd" << endl;
        cout << "Masukkan nilai: ";
        cin >> odd;
        cout << "Hasil : " << cBool(isOdd(odd)) << endl;
    }else if(pilih == 3) {
        // 3. isFactor
        int x, y;
        cout << "3. is factor" << endl;
        cout << "Masukkan Nilai factor 1 : ";
        cin >> x;
        cout << "Masukkan Nilai factor 2 : ";
        cin >> y;
        cout << "Hasil : " << cBool(isFactor(x, y)) << endl;
    }else if(pilih == 4) {
        // 4. maxArray
        int lenghtM;
        int arrMax[lenghtM] = {};

        cout << "4. max Array" << endl;
        cout << "Masukkan panjang array : ";
        cin >> lenghtM;
        for(int i = 0; i < lenghtM; i++) {
            cout << "masukkan isi array ke-" << i + 1 << ": ";
            cin >> arrMax[i];
        }
        cout << "Hasil : " << maxArray(arrMax, lenghtM) << endl;
    }else if(pilih == 5) {
        // 5. minArray
        int lenghtN;
        int arrMin[lenghtN] = {};

        cout << "5. min Array" << endl;
        cout << "Masukkan panjang array : ";
        cin >> lenghtN;
        for(int i = 0; i < lenghtN; i++) {
            cout << "masukkan isi array ke-" << i + 1 << ": ";
            cin >> arrMin[i];
        }
        cout << "Hasil : " << minArray(arrMin, lenghtN) << endl;
    }else if(pilih == 6) {
        // 6. isMax
        int a, b;

        cout << "6. isMax" << endl;
        cout << "Masukkan nilai ke 1 : ";
        cin >> a;
        cout << "Masukkan nilai ke 2 : ";
        cin >> b;
        cout << "Hasil : " << isMax(a, b) << endl;
    }else if(pilih == 7) {
        // 7. isMin
        int m, n;

        cout << "7. isMin" << endl;
        cout << "Masukkan nilai ke 1 : ";
        cin >> m;
        cout << "Masukkan nilai ke 2 : ";
        cin >> n;
        cout << "Hasil : " << isMin(m, n) << endl;
    }else if(pilih == 8) {
        // 8. sumEven
        int lenghtEven;
        int arrEven[lenghtEven] = {};

        cout << "8. sum even" << endl;
        cout << "Masukkan panjang array : ";
        cin >> lenghtEven;
        for(int i = 0; i < lenghtEven; i++) {
            cout << "masukkan isi array ke-" << i + 1 << ": ";
            cin >> arrEven[i];
        }
        cout << "Hasil : " << sumEven(arrEven, lenghtEven) << endl;
    }else if(pilih == 9) {
        // 9. sumOdd
        int lenghtOdd;
        int arrOdd[lenghtOdd] = {};

        cout << "9. sum odd" << endl;
        cout << "Masukkan panjang array : ";
        cin >> lenghtOdd;
        for(int i = 0; i < lenghtOdd; i++) {
            cout << "masukkan isi array ke-" << i + 1 << ": ";
            cin >> arrOdd[i];
        }
        cout << "Hasil : " << sumOdd(arrOdd, lenghtOdd) << endl;
    }else if(pilih == 10) {
        // 10. isFound
        int lenghtFound;
        int found;
        int arrFound[lenghtFound] = {};

        cout << "10. is found" << endl;
        cout << "Masukkan panjang array : ";
        cin >> lenghtFound;
        for(int i = 0; i < lenghtFound; i++) {
            cout << "masukkan isi array ke-" << i + 1 << ": ";
            cin >> arrFound[i];
        }
        cout << "Masukkan nilai yang di cari : ";
        cin >> found;
        cout << "Hasil : " << cBool(isFound(arrFound, lenghtFound, found)) << endl;
    }else if(pilih == 11) {
        // 11. swapp
        int swapA, swapB;

        cout << "11. swappp" << endl;
        cout << "masukkan nilai pertama : ";
        cin >> swapA;
        cout << "masukkan nilai pertama : ";
        cin >> swapB;
        swapp(swapA, swapB);
        cout << "Nilai Pertama = " << swapA;
        cout << "Nilai kedua = " << swapB;
    }else {
        cout << "anda memasukkan inputan yang salah!";
    }


    return 0;
}

bool isEven(int x) {
    if(x % 2 == 0) {
        return true;
    }else {
        return false;
    }
}

bool isOdd(int x) {
    if(x % 2 == 1) {
        return true;
    }else {
        return false;
    }
}



bool isFactor(int x, int y) {
    bool value;
    int i = 1;
    int temp;
    while(temp < x) {
        temp = y * i;

        if(temp == x) {
            value = true;
        }else {
            value = false;
        }
        i++;
    }
    return value;
}

int maxArray(int arr[], int lenght) {
    int result;
    for(int i = 0; i <= lenght; i++) {
        if(result < arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

int minArray(int arr[], int lenght) {
    int result = 1000;
    for(int i = 0; i < lenght; i++) {
        if(result > arr[i]) {
            result = arr[i];
        }
    }
    return result;
}

bool isFound(int arr[], int lenght, int x) {
    bool value;
    for(int i = 0; i < lenght; i++) {
        if(x == arr[i]) {
            value = true;
        }else {
            value = false;
        }
    }
    return value;
}

int isMax(int a, int b) {
    if(a > b) {
        return a;
    }else {
        return b;
    }
}

int isMin(int a, int b) {
    if(a < b) {
        return a;
    }else {
        return b;
    }
}

int sumEven(int arr[], int lenght) {
    int result;
    for(int i = 0; i < lenght; i++) {
        if(arr[i] % 2 == 0) {
            result += arr[i];
        }
    }
    return result;
}

int sumOdd(int arr[], int lenght) {
    int result;
    for(int i = 0; i < lenght; i++) {
        if(arr[i] % 2 == 1) {
            result += arr[i];
        }
    }
    return result;
}

void swapp(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

string cBool(bool x) {
    if(x == true) {
        return "true";
    }else {
        return "false";
    }
}

