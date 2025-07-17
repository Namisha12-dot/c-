// sum of digits(accept a number and use a for loop to find the sum of its digits)
#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    // Make a copy of the number to work with
    int temp = num;

    // Using a for loop to calculate the sum of digits
    for (; temp > 0; temp /= 10) {
        int digit = temp % 10;  // Get last digit
        sum += digit;           // Add to sum
    }

    cout << "Sum of digits of " << num << " is: " << sum << endl;

    return 0;
}
