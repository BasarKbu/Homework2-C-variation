#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,element,sum=0,j;
	printf("Enter the element count: \n"); scanf("%d",&element);
	
	for(i=1;i<=element;i++){
		int cnt=0;
		for(j=1;j<=i;j++){
			
			if(i % j == 0)
			cnt++;
			
		}
		if(cnt == 2)
		sum+=i;
	}
	
	printf("The sum of all prime numbers until the element is(we count element as well):%d ",sum);
	
	return 0;
}
