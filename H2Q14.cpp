#include <stdio.h>

int main() {
    int i, n, digit, fact, j, sum, temp;

    printf("Enter the term count: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            digit = temp % 10;
            fact = 1;

            for (j = 1; j <= digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (i == sum) {
            printf("%d number is a strong number.\n", i);
        }
    }

    return 0;
}

