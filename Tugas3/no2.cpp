// Shell Sort in C++ programming

#include <iostream>
using namespace std;
void shellSort(int array[], int n);
void printArray(int array[], int size);

// Driver code
int main() {
  int data[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int size = sizeof(data) / sizeof(data[0]);
  int pilih;
  
  cout << "|| Sorting ||" << endl;
  cout << "1.shell sort" << endl;
  cout << "2.bubble sort" << endl;
  cout << "pilih metode sort di atas dengan input 1 atau 2!!" << endl;

  cin >> pilih;

  if(pilih == 1) {
    cout << "shelsort" << endl;
    shellSort(data, size);
    cout << "Sorted array: \n";
    printArray(data, size);
  }else if(pilih == 2) {
    cout << "bubblesort" << endl;
    bubbleSort(data, size);
    cout << "Sorted array: \n";
    bubbleSort(data, size);
  }
  

}


// Shell sort
void shellSort(int arr[], int n) {
  // Rearrange elements at each n/2, n/4, n/8, ... intervals
  for (int interval = n / 2; interval > 0; interval /= 2) {

    cout << "\nINTERVAL " << interval << endl;
    for (int i = interval; i < n; i += 1) {
      int temp = arr[i];
      cout << "TEMP " << temp << "\t";
      printArray(arr, n);
      cout << "";
      int j;
      // for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
      for (j = i; j >= interval; j -= interval) {
        cout << "CEK " << j-interval << "::" << j << endl;
        if (arr[j - interval] <= temp) break;
        cout << "COPY " <<  j - interval << "::" << j << "\t";
        arr[j] = arr[j - interval];// cpy
        printArray(arr, n);
      }
      cout << "LETAKAN TEMP DI " << j << " BERNILAI " << temp << "\t";
      arr[j] = temp;
      (arr, n);
      cout << endl;
    }
  }
}

void bubbleSort(int array[], int size) {
  // loop untuk akses setiap element array
  for (int step = 0; step < size; step++) {
    int acak = 0;
    // loop untuk membandingkan element array
    for (int i = 0; i < size - 1; i++) {
      // Membandingkan kedua element array
      if (array[i] > array[i + 1]) {
        // Menukar element jika kondisi IF terpenuhi
        swapN(array[i],array[i + 1]);
        acak++;
      }
    }
    if(acak==0){
        break;
    }
    // Cetak array per step
    printArray(array,size);
  }
}


// Print an array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}


