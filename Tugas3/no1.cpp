#include <iostream>
using namespace std;

bool isGanjil(int a);
void genapTerkecil(int arr[], int leng);

int main() {
    int arr[] = {6,7,4,9,2,3};
    int sizee = sizeof(arr) / sizeof(arr[0]);

    genapTerkecil(arr, sizee);

    return 0;
}

bool isGanjil(int a) {
    if(a % 2 == 1) {
        return true;
    }else {
        return false;
    }
}

void genapTerkecil(int arr[], int leng) {
    int temp = arr[0];
    int index;
    bool point;
    for(int i = 0; i < leng; i++) {
        point = isGanjil(arr[i]);
        if(point == false) {
            if(temp >= arr[i]) {
                temp = arr[i];
                index = i;
            }
        }
    }
    if(temp == arr[0]) {
        cout << "tidak ada bilangan genap" << endl;
        temp = 0;
    }
    cout << "genap terkecil :" << temp << endl;
    cout << "index :" << index << endl;
}

