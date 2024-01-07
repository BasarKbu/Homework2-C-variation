#include <stdio.h>
#include <math.h>

int main() {
    int term, sign = -1;
    float sum = 0, x;
    
    printf("Enter the term count: ");
    scanf("%d", &term);
    
    printf("Enter the variable: ");
    scanf("%f", &x);

    x = x * (M_PI / 180); // Converting degrees to radians for trigonometric functions

    for (int i = 2; i <= term * 2; i += 2) { // Increase by 2 for each iteration
        float num = pow(x, i);
        int fact = 1;

        for (int j = 1; j <= i; j++) {
            fact *= j;
        }

        sum += sign * (num / fact);
        sign *= -1; // Alternating signs for each term
    }

    printf("The sum of the series is: %.2f\n", sum);

    return 0;
}

