#include <iostream>
using namespace std;

struct sepeda {
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";

};

struct sepeda mySepeda;
struct sepeda* PtrSepeda;
int main() {
    PtrSepeda = &mySepeda;
    cout << "Merk : " << PtrSepeda->Merk << endl;
    cout << "Type : " << PtrSepeda->Type << endl;
    cout << "Tahun : " << PtrSepeda->Tahun << endl;
    cout << "Harga : " << PtrSepeda->Harga << endl;
    return 0;
}

