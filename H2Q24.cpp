#include<stdio.h>
//Binary -> decimal

int main() {
    int binary, decimal = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    for (; binary != 0;) {
        digit = binary % 10; // Extract the last digit
        decimal += digit * base; // Multiply the digit with its corresponding power of 2 and add to decimal
        base *= 2; 
        binary /= 10; 
    }

    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}

