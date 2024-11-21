#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int p = arr[i];
        int j = i - 1;

        // Memimdahkan elemen arr[0..i-1] yang lebih besar dari p
        // ke satu posisi di depan dari posisi saat ini
        while (j >= 0 && arr[j] > p) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = p;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertionSort(arr, n);
    cout << "Inilah hasil array yang sudah terurut :";
    printArray(arr, n);
    
    return 0;
}