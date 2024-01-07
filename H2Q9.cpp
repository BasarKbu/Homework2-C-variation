#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main(){
	int n,digit=0,temp,sum=0,temp2;
	printf("Enter a number: \n"); scanf("%d",&n);
	temp=n;
	
	while(temp!=0){
	 temp/=10;	
	 digit++;	
	}
	
	temp2=n;
	while(temp2!=0){
		sum+=pow(temp2 % 10,digit);
		temp2/=10;
	}
	
	if(n == sum)
	printf("Your number is armstrong number. \n");
	else
	printf("Your number is not armstrong number. \n");
	
	return 0;
}
