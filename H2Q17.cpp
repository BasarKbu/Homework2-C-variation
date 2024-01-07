#include<stdio.h>
#include<stdlib.h>
//Calculates this series: 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/6 ...+  1/n terms.
int main(){
	float i,sum=0,n;
	printf("Enter the term count: \n"); scanf("%f",&n);
	
	for(i=1;i<=n;i++){
		sum+=float(1/i);
	}
	
	printf("The sum is:%f \n",sum);
	return 0;
}
