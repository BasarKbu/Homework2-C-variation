#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Calculates this series:1 + x + x^2/2! + x^3/3! +...
int main(){
	int term_count,i,j,k;
	float x,sum = 1;
	printf("Enter the term count: \n"); scanf("%d",&term_count);
	printf("Enter your variable: \n"); scanf("%f",&x);
	
	for(i=2;i<=term_count;i++){
		float fact=1,temp=1;
		for(j=1;j<=i;j++){
			temp*=x;
		}
		printf("%f\n",temp);
		for(k=1;k<=i;k++)
		fact*=k;	
		printf("%f\n",fact);
		sum += temp/fact;
	}
	
	printf("Sum of the series is:%f",sum);
	
	return 0;
}
