#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah bilangan : ";
    cin >> n;


    vector<int> deret(n);


    cout << "Masukkan deret bilangan:\n";
    for (int i = 0; i < n; ++i) {
        cout << "bilangan ke-" << i + 1 << ": ";
        cin >> deret[i];
    }

    cout << "Deret sebelum di sorting: ";
    for (int i = 0; i < n; ++i) {
        cout << deret[i] << " |";
    }
    cout << "\n";


    sort(deret.begin(), deret.end(), greater<int>());


    cout << "Deret setelah di sorting besar ke kecil: ";
    for (const auto& elem : deret) {
        cout << elem << " |";
    }
    cout << "\n";


    double median;
    if (n % 2 == 0) {
        median = (deret[n / 2 - 1] + deret[n / 2]) / 2.0;
    }
    else {
        median = deret[n / 2];
    }


    cout << "Nilai median: " << median << "\n";

    return 0;
}
