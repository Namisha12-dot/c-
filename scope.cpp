#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

void display() {
    // Local variable in display()
    int localVar = 50;
    cout << "Inside display() - Local variable: " << localVar << endl;
    cout << "Inside display() - Global variable: " << globalVar << endl;
}

int main() {
    // Local variable in main()
    int localVar = 10;
    cout << "Inside main() - Local variable: " << localVar << endl;

    // Accessing global variable
    cout << "Inside main() - Global variable: " << globalVar << endl;

    // Block scope
    {
        int blockVar = 5;
        cout << "Inside block - Block variable: " << blockVar << endl;
        cout << "Inside block - Local variable from main(): " << localVar << endl;
    }

    display();

    return 0;
}