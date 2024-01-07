#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Prints all the armstrong numbers between 1-n.
int main(){
int i,n,temp,temp2;
printf("Enter the element count: \n"); scanf("%d",&n);

for(i=2;i<n;i++){
	
	temp = i;
	int digit = 0,sum = 0;
	while(temp != 0){
		temp = temp / 10;
		digit++;
	}
	temp2 = i;
	while(temp2 != 0){
		sum += pow(temp2 % 10,digit);
		temp2 = temp2 / 10;
	}
	
	if(sum == i)
	printf("%d is an armstrong number. \n",i);
	
	
	
}
	
	return 0;
}
