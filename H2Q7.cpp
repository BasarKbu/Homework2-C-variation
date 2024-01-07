#include<stdio.h>
#include<stdlib.h>

int main(){
int number,cnt=0,i;	
	printf("Enter a number: \n"); scanf("%d",&number);
	for(i=1;i<=number;i++){
		if(number % i == 0)
		cnt++;
	}
	
	if(cnt>2)
		printf("Your number is not a prime number. \n");
	else
	    printf("Your number is a prime number. \n");
	return 0;
}
