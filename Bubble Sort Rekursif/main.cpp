#include <iostream>

using namespace std;

void bubbleSortRecursive(int arr[], int n) {
    // Base case: jika hanya ada satu elemen atau tidak ada elemen
    if (n <= 1) {
        return;
    }else{
        // Melakukan satu kali iterasi untuk membawa elemen terbesar ke posisi terakhir
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]){
                // Menukar nilai arr[i] dan arr[i+1]
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        // Panggil rekursif untuk n - 1 elemen terakhir
        bubbleSortRecursive(arr, n - 1);
    }
}

int main(){
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
    bubbleSortRecursive(arr, NMAX);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: " << endl;
    for (int i = 0; i < NMAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
