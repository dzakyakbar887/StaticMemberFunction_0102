#include <iostream>
#include <string> //menyertakan library string
using namespace std;

class Mahasiswa { 

    private:
        static int nim; 
        public:
        int id;
        string nama;

        void setID();
        void printAll();

        //pembuatan static function
        static void setnim(int nim) {
            nim = nim;
        }

        static int getnim() {
            return nim;
        }

        Mahasiswa(string nama) : nama(nama) {
            setID();
        }
};