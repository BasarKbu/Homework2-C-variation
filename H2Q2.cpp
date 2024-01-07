#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Enter the first number: \n");
    scanf("%d", &a);
    printf("Enter the second number: \n");
    scanf("%d", &b);
    printf("Enter the third number: \n");
    scanf("%d", &c);

    float disk, r1, r2;
    disk = b * b - 4 * a * c;

    if (disk < 0)
        printf("The quadratic equation has no real roots.\n");
    else if (disk == 0) {
        printf("The quadratic equation has two equal roots.\n");
        r1 = (float)(-b) / (2 * a);
        printf("Both roots are equal and their value is: %0.1f\n", r1);
    }
    else {
        printf("The quadratic equation has two different roots.\n");
        disk = sqrt(disk);
        r1 = (-b + disk) / (2 * a);
        r2 = (-b - disk) / (2 * a);
        printf("First root is: %0.1f, Second root is: %0.1f \n", r1, r2);
    }
    return 0;
}

