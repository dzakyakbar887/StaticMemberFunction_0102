#include <iostream>
using namespace std;

class Mahasiswa { // membuat class Mahasiswa

    public:
        static int nim; // deklarasi variable static yaitu variable nim
        // deklarasi variable member
        int id;
        string nama;

        // deklarasi prosedur setID() dan printAll()
        void setID();
        void printAll();

        //pembuatan constructor mahasiswa dengan parameter nama
        //member intitializer list
        Mahasiswa(string nama) : nama(nama) {
            setID();
        }
};
