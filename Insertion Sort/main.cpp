#include <iostream>

using namespace std;

void insertionSort(int* arr, int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j;
    for (j = i - 1; j >= 0 && arr[j] > key; j--) {
      arr[j + 1] = arr[j];
    }
    arr[j + 1] = key;
  }
}

int main() {
    // Mendeklarasikan array
    const int NMAX = 20000;
    int arr[NMAX];
    int input = NMAX;

    // memasukan input
    for(int i = 0;i<NMAX;i++){
        arr[i] = input;
        input--;
    }

    // Menampilkan array sebelum diurutkan
    cout << "Array sebelum diurutkan: " << endl;
    for (int i = 0; i < NMAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;

    // Mengurutkan array
    insertionSort(arr, NMAX);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: " << endl;
    for (int i = 0; i < NMAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

