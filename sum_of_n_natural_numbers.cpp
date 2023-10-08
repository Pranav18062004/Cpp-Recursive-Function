/* 
PRN - 22070123092
Exp-15(Part-B)
Recursive function to calculate the sum of integers from 1 to 'n'
*/
#include <iostream>
using namespace std;

// Recursive function to calculate the sum of integers from 1 to 'n'
int sumOfIntegers(int n) {
    // Base case: If 'n' is 1, return 1
    if (n == 1) {
        return 1;
    }
    // Recursive case: Calculate the sum from 1 to 'n' by adding 'n' and the sum of integers from 1 to 'n-1'
    return n + sumOfIntegers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer 'n': ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    int result = sumOfIntegers(n);
    cout << "The sum of integers from 1 to " << n << " is: " << result << endl;

    return 0;
}
/*Output
Enter a positive integer 'n': 2
The sum of integers from 1 to 2 is: 3
*/
