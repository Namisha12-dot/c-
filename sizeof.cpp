#include <iostream>
#include <climits>   // For INT_MIN, INT_MAX
#include <cfloat>    // For FLT_MIN, FLT_MAX
using namespace std;

int main() {
    cout << "----- Data Type Sizes -----\n";
    cout << "Size of char: " << sizeof(char) << " byte(s)\n";
    cout << "Size of int: " << sizeof(int) << " byte(s)\n";
    cout << "Size of short: " << sizeof(short) << " byte(s)\n";
    cout << "Size of long: " << sizeof(long) << " byte(s)\n";
    cout << "Size of long long: " << sizeof(long long) << " byte(s)\n";
    cout << "Size of float: " << sizeof(float) << " byte(s)\n";
    cout << "Size of double: " << sizeof(double) << " byte(s)\n";
    cout << "Size of bool: " << sizeof(bool) << " byte(s)\n";

    cout << "\n----- Integer Ranges -----\n";
    cout << "Signed int range: " << INT_MIN << " to " << INT_MAX << endl;
    cout << "Unsigned int max: " << UINT_MAX << endl;

    cout << "\n----- Type Casting -----\n";
    int a = 65;
    char ch = (char)a; // int to char
    float f = (float)a; // int to float
    cout << "Integer value: " << a << endl;
    cout << "After casting to char: " << ch << endl;
    cout << "After casting to float: " << f << endl;

    return 0;
}