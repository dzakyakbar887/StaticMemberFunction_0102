#include <iostream>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 0;
        nama = "Tidak diketahui";
    }

    // 2. Constructor hanya dengan id
    Kendaraan(int i) {
        id = i;
        nama = "Tidak diketahui";
    }

    // 3. Constructor hanya dengan nama
    Kendaraan(string n) {
        id = 0;
        nama = n;
    }

    // 4. Constructor lengkap (id dan nama)
    Kendaraan(int i, string n) {
        id = i;
        nama = n;
    }

    // Method untuk menampilkan data
    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan berbagai constructor
    Kendaraan k1;                 // default
    Kendaraan k2(101);            // hanya id
    Kendaraan k3("Motor");        // hanya nama
    Kendaraan k4(202, "Mobil");   // lengkap

    // Menampilkan data
    cout << "Data Kendaraan:\n";
    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}