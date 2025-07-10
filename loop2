// reverse a number
#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;            // Get the last digit
        reverse = reverse * 10 + digit;  // Build reversed number
        num = num / 10;                  // Remove the last digit
    }

    cout << "Reversed number = " << reverse;
    return 0;
}
