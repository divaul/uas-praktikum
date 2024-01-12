#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Masukkan jumlah baris pola: ";
    cin >> n;

    while (n <= 0) {
        cout << "Jumlah baris harus positif. Masukkan kembali: ";
        cin >> n;
    }


    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n * 2; ++j) {
            if (j < n - i || j >= n + i) {
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}
