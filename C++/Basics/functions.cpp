#include <iostream>
using namespace std;

// Function definition: Adds two numbers and returns the sum
int add(int a, int b) {
    return a + b;
}

// Function definition: Prints a greeting message
void greet(string name) {
    cout << "Hello, " << name << "! Welcome to learning functions!" << endl;
}

// Function definition: Multiplies two numbers and returns the product
int multiply(int a, int b) {
    return a * b;
}

// Function definition: Tells if a number is even or odd
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

int main() {
    // Explaining functions to a 5-year-old:
    cout << "A function is like a magic box. You give it something, it does magic, and gives you something back!" << endl;

    // Using the add function
    int sum = add(5, 3);
    cout << "If we add 5 and 3, the answer is: " << sum << endl;

    // Using the greet function
    greet("Charlie");

    // Using the multiply function
    int product = multiply(4, 6);
    cout << "If we multiply 4 and 6, the answer is: " << product << endl;

    // Using the checkEvenOdd function
    checkEvenOdd(7);
    checkEvenOdd(10);

    return 0;
}
