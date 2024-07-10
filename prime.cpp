#include <iostream>
using namespace std;

int main() {
    int num = 7; // Number to check
    bool isPrime = true;

    // Check if the number is divisible by any number other than 1 and itself
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << num << " is a prime number.\n";
    } else {
        cout << num << " is not a prime number.\n";
    }


}