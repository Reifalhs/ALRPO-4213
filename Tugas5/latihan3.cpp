#include <iostream>
#include <math.h>
using namespace std;

typedef struct fungsi {
    float phi = 3.14;
    int lPersegiPanjang(int p, int l) {
        return p * l;
    }
    float lLingkaran(int r) {
        return phi * r * r;
    }
    float vKerucut(int r, int t) {
        return 0.3 * phi * pow(r,2) * t;
    }
    float vBola(int r) {
        return 1.3 * phi * pow(r,3);
    }
}f;

f myFung;

int main() {
    cout << myFung.lPersegiPanjang(10,5);
    return 0;
}


