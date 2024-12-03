#include <stdio.h>

int main() {
    int n, count = 0, num = 2; // Start checking for primes from 2

    // Ask the user for the number of prime numbers to print
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);

    printf("First %d prime numbers are:\n", n);

    while (count < n) {
        int is_prime = 1; // Assume num is prime

        // Check if num is prime
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0; // Not a prime number
                break;
            }
        }

        // If it's prime, print it
        if (is_prime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
