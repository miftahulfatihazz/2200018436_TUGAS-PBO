#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel
    int angka = 5;
    
    // Penggunaan tipe data
    double bilangan = 3.14;
    
    // Perulangan for
    for (int i = 0; i < angka; i++) {
        cout << "Perulangan ke-" << i + 1 << endl;
    }
    
    // Percabangan if
    if (angka > 3) {
        cout << "Angka lebih dari 3" << endl;
    }
    
    // Perulangan while
    int j = 0;
    while (j < angka) {
        cout << "Perulangan while ke-" << j + 1 << endl;
        j++;
    }
    
    // Perulangan do-while
    int k = 0;
    do {
        cout << "Perulangan do-while ke-" << k + 1 << endl;
        k++;
    } while (k < angka);
    
    // Array satu dimensi
    int arr[5] = {1, 2, 3, 4, 5};
    
    // Array multidimensi
    int matriks[2][2] = {{1, 2}, {3, 4}};
    
    // Input
    cout << "Masukkan sebuah angka: ";
    cin >> angka;
    
    // Output
    cout << "Angka yang dimasukkan: " << angka << endl;
    
    // Komentar
    // Ini adalah komentar dalam C++
    
    return 0;
}

