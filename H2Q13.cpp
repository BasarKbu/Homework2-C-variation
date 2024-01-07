#include<stdio.h>
#include<stdlib.h>
//145=1!+4!+5!
int main(){
	int number,fact=1,temp,digit,sum=0,i;
	printf("Enter a number: \n"); scanf("%d",&number);
	temp=number;
	
	while(temp!=0){
		digit=temp % 10;
		for(i=2;i<=digit;i++){
			fact*=i;
		}
		sum+=fact;
		fact=1;
		temp/=10;
	}
	if(number == sum)
	printf("The number you have entered is a strong number. \n");
	else
	printf("The number you have entered is not a strong number. \n");
	
return 0;	
}
