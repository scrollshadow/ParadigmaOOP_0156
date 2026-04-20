#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;
    
    void printData(){
        cout << "Nama Barang: " << nama << endl;
        cout << "Jumalah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;

    }
};

int main(){
    Barang elektronik;
    Barang nonelektronik;

    elektronik.nama = "Hp";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = 1-1-2025;

    nonelektronik.nama = "Buku";
    nonelektronik.jumlah = 1;
    nonelektronik.kategori = "Nonelektronik";
    nonelektronik.tanggalProduksi = 1-1-2025;

    elektronik.printData();
    nonelektronik.printData();
}