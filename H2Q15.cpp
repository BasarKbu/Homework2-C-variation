#include<stdio.h>

int main(){
	int reverse=0,number,temp;
	printf("Enter a number: \n"); scanf("%d",&number);
	temp=number;
	while(temp!=0){
		reverse=reverse * 10 + temp % 10;
		temp/=10;
	}
	if(reverse == number)
	printf("The number you have entered is a polindrom number.\n");
	else
	printf("The number you have entered is not a polindrom number.\n");
	return 0;
}
