#include <iostream>
#include <string>

using namespace std;

void saysDigits(int num, string arr[]) {
    if (num == 0) {
        // Base case: If the number is 0, we do not need to print anything.
        return;
    }

    int digit = num % 10; // Extract the last digit of the number
    num = num / 10; // Update num to remove the last digit

    saysDigits(num, arr); // Recursively process the remaining digits

    // Print the word representation of the current digit
    cout << arr[digit] << " ";
}

int main() {
    int num = 420;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num == 0) {
        // Special case: If num is 0, directly print "zero"
        cout << arr[0] << endl;
    } else {
        saysDigits(num, arr); // Convert the number into its word representation
        cout << endl; // End the line after printing all digits' words
    }

    return 0;
}
