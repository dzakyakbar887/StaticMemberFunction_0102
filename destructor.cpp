#include <iostream>
using namespace std;

class angka
{
    private:
        int *arr;
        int panjang;

        public:
            angka(int); // Constructor
            ~angka(); // Destructor
            void cetakdata();
            void isidata();
};

angka::angka(int i) { // Constructor
    panjang = i;
    arr = new int[i];
    isidata();
}
angka::~angka() { // Destructor
    cout << endl;
    cetakdata();
    delete[] arr;
    cout << "alamat array sudah dilepaskan" << endl;
}
    
void angka::cetakdata() 
{
    for (int i = 1; i <= panjang; i++) 
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isidata()
{
    for (int i = 1; i <= panjang; i++) 
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}
int main()
{
    angka belajar(3);                  // constructor dipanggil
    angka *ptrBelajar = new angka(5); // constructor dipanggil
    delete ptrBelajar;               // destructor dipanggil

    return 0;
}