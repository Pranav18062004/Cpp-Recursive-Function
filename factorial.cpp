/*
PRN - 22070123092
Exp-15(Part-A)
Function to calculate factorial recursively
*/
#include <iostream>
using namespace std;

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    
    // Check if the input is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int result = factorial(num);
        cout << "Factorial of " << num << " is " << result << endl;
    }
    
    return 0;
}
/*Output
Enter a non-negative integer: 3
Factorial of 3 is 6
*/
