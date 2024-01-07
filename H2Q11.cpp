#include<stdio.h>
#include<stdlib.h>

int main(){
	int number,i,sum=0;
	printf("Enter the number: \n"); scanf("%d",&number);
	
	for(i=1;i<=(number/2);i++){
		if(number % i == 0)
		sum+=i;
	}
	if(sum==number)
	printf("The number you have entered is a perfect number. \n");
	else
	printf("The number you have entered is not a perfect number. \n");
	return 0;
}
