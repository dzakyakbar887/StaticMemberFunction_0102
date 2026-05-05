#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;

public:
    mahasiswa();
    mahasiswa(int iNim);
    mahasiswa(string iNama);
    mahasiswa(int iNim, string iNama);
    void cetak();
};
