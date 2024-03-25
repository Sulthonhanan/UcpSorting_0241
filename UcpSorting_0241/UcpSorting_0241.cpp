// UcpSorting_0241.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1. Algoritma Insertion Sort adalah metode pengurutan data yang bekerja dengan cara menyisipkan elemen data pada posisi yang tepat dalam array. Proses ini melibatkan perbandingan dan pergeseran elemen dalam array untuk mencapai urutan yang diinginkan.
// 2. Algoritma Selection Sort adalah metode pengurutan yang bekerja dengan cara mencari elemen minimum (atau maksimum) dalam bagian array yang belum diurutkan dan menukarnya dengan elemen pertama dalam bagian tersebut. Proses ini diulangi sampai seluruh array terurut. 
// 3. Untuk mengetahui jumlah langkah yang dilakukan dalam algoritma pengurutan, kita perlu memahami kompleksitas waktu dari algoritma tersebut. Kompleksitas waktu mengukur berapa banyak operasi yang dilakukan oleh algoritma terhadap jumlah elemen dalam data yang diurutkan.



#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertionSort(int nickname[], int n) {
    for (int j = 0; j < n - 1; j++) {
        int min_index = j;
        for (int i = j + 1; i < n; i++) {
            if (nickname[i] < nickname[min_index]) {
                min_index = i;
            }
        }
        swap(nickname[j], nickname[min_index]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n = 41; // Panjang array sesuai dengan ketentuan
    int nickname[41]; // Array dengan panjang 2

    cout << "Masukkan data: ";
    for (int i = 0; i < n; i++) {
        cin >> nickname[i];
    }


    insertionSort(nickname, n);

    cout << "Data setelah proses sortir: ";
    printArray(nickname, n);

    return 0;

