#include <iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
  // Menginisialisasi flag
  bool swapped = true;

  // Melakukan perulangan sebanyak n-1 kali
  for (int i = 0; i < n - 1; i++) {
    swapped = false;

    // Melakukan perulangan dari indeks i+1 hingga n-1
    for (int j = i + 1; j < n; j++) {
      // Jika nilai arr[i] lebih besar dari arr[j]
      if (arr[i] > arr[j]) {
        // Menukar nilai arr[i] dan arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        // Menentukan flag swapped
        swapped = true;
      }
    }

    // Jika flag swapped bernilai false, maka array sudah terurut
    if (!swapped) {
      break;
    }
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
    bubble_sort(arr, NMAX);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: " << endl;
    for (int i = 0; i < NMAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
