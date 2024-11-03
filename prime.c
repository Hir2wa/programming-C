#include <stdio.h>

int main() {
    int num, i, isPrime;

    printf("Prime numbers between 1 and 50 are:\n");

    // Loop through numbers from 2 to 50
    for (num = 2; num <= 50; num++) {
        isPrime = 1; // Assume the number is prime

        // Check divisibility using if statements
        for (i = 2; i <= num / 2; i++) { // Only check up to num/2
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break; // Exit the loop if a divisor is found
            }
        }

        // If isPrime is still 1, then num is a prime number
        if (isPrime) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
