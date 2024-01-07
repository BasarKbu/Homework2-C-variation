/*
prints this triangle 
1
0 1
1 0 1 
0 1 0 1
1 0 1 0 1
......
*/
#include <stdio.h>

int main() {
    int rows, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int toggle = 0; // To toggle between 0 and 1

    for (i = 0; i < rows; i++) {
        toggle = i % 2 == 0 ? 1 : 0; // Alternating 1 and 0

        for (j = 0; j <= i; j++) {
            printf("%d ", toggle);
            toggle = toggle ? 0 : 1; // Toggle between 0 and 1
        }

        printf("\n");
    }

    return 0;
}

