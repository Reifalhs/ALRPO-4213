#include <iostream>
#include <math.h>
using namespace std;

struct fungsi {
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
};

struct fungsi myFunctions;

int main() {
    cout << myFunctions.vKerucut(2,10) << endl;
    return 0;
}
