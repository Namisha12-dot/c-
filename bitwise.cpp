#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int a = 12;  // 1100 in binary
    int b = 5;   // 0101 in binary

    cout << "a = " << a << " -> " << bitset<8>(a) << endl;
    cout << "b = " << b << " -> " << bitset<8>(b) << endl;

    cout << "\na & b = " << (a & b) << " -> " << bitset<8>(a & b) << endl;
    cout << "a | b = " << (a | b) << " -> " << bitset<8>(a | b) << endl;
    cout << "a ^ b = " << (a ^ b) << " -> " << bitset<8>(a ^ b) << endl;
    cout << "~a = " << (~a) << " -> " << bitset<8>(~a) << " (2's complement)" << endl;
    cout << "b << 1 = " << (b << 1) << " -> " << bitset<8>(b << 1) << endl;
    cout << "b >> 1 = " << (b >> 1) << " -> " << bitset<8>(b >> 1) << endl;

    return 0;
}
