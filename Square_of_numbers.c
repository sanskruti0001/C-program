#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Print the power of each number from 1 to n
    for (int i = 1; i <= n; i++) {
        printf("%d = %d\n", i, i * i);
    }

    return 0;
}