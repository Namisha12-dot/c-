#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Input
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // Find Largest
    int largest;
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Find Smallest
    int smallest;
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    // Sorting - Ascending
    int x = a, y = b, z = c;
    if (x > y) swap(x, y);
    if (x > z) swap(x, z);
    if (y > z) swap(y, z);

    // Output
    cout << "\nLargest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    cout << "\nAscending order: " << x << " " << y << " " << z << endl;
    cout << "Descending order: " << z << " " << y << " " << x << endl;

    return 0;
}