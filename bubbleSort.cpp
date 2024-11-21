#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Proses membandingkan elemen [j] dengan elemen [j+1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {42, 32, 22, 12, 22, 11, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    bubbleSort(arr, n);
    cout << "Inilah hasil array yang sudah terurut : ";
    printArray(arr, n);
    
    return 0;
}