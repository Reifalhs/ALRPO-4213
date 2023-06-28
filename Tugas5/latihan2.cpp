#include <iostream>
using namespace std;

struct sepeda {
    string Merk = "Polygon";
    string Type = "Sepeda Gunung";
    int Tahun = 2013;
    string Harga = "2.000.000";

};

struct sepeda mySepeda;

int main() {
    cout << "Merk : " << mySepeda.Merk << endl;
    cout << "Type : " << mySepeda.Type << endl;
    cout << "Tahun : " << mySepeda.Tahun << endl;
    cout << "Harga : " << mySepeda.Harga << endl;
    return 0;
}
