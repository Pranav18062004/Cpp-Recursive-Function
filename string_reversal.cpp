/* 
PRN - 22070123092
Exp-15(Part-C)
Recursive function to print a string in reverse
*/
#include <iostream>
#include <cstring> // Include the header for strlen function
using namespace std;

// Recursive function to print a string in reverse
void printReverseString(const char* str, int n) {
    // Base case: If the string is empty (n is 0), return
    if (n == 0) {
        return;
    }

    // Print the last character of the string
    cout << str[n - 1];

    // Call the function recursively with the string excluding the last character
    printReverseString(str, n - 1);
}

int main() {
    char str[100]; // Declare a character array to store the input string
    cout << "Enter a string: ";
    cin.getline(str, sizeof(str)); // Read a string from the user

    int n = strlen(str); // Calculate the length of the input string

    cout << "String in reverse: ";
    printReverseString(str, n); // Call the recursive function

    cout << endl; // Print a newline character for formatting

    return 0;
}
/*Output
Enter a string: Symbiosis Institute Of Technology
String in reverse: ygolonhceT fO etutitsnI sisoibmyS
*/
