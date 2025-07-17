#include <iostream>
using namespace std;

int main() {
    int age;
    float salary;

    // Input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your monthly salary: ";
    cin >> salary;

    // Logic for loan eligibility
    if (age >= 21 && salary >= 25000) {
        cout << "\n✅ You are eligible for the loan." << endl;
    } else {
        cout << "\n❌ You are not eligible for the loan." << endl;

        // Reasons
        if (age < 21) {
            cout << "- Your age must be at least 21." << endl;
        }
        if (salary < 25000) {
            cout << "- Your salary must be at least ₹25,000." << endl;
        }
    }

    return 0;
}
