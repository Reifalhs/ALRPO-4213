#include <iostream>
using namespace std;

enum nilai {
    A = 90,
    AB = 80,
    B = 70,
    BC = 65,
    C = 60,
    CD = 55,
    D = 50,
    E = 0
};

int main() {
    nilai r;

    r = AB;

    cout << r;
    return 0;
}
