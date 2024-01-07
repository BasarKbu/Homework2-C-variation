#include<stdio.h>
#include<stdlib.h>
//This program takes decimal number and converts them to binary.
int main(){
	int number,bin = 0,rem = 0,place = 1;
    printf("Enter a number: \n"); scanf("%d",&number);
    while(number > 0){
	   rem=number % 2;
	   number /= 2;
	   bin = bin + rem * place;
 	   place *= 10;
      }

     printf("binary version of the %d",bin);

return 0;	
}
