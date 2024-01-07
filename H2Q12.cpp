#include<stdlib.h>
#include<stdio.h>

int main(){
	int i,j,term;
	printf("Enter the term count: \n"); scanf("%d",&term);
	
	for(i=1;i<=term;i++){
		int sum=0;
		
		for(j=1;j<=(i/2);j++){
			if(i % j == 0)
			sum+=j;
			
		}
		if(i == sum)
		printf("%d is a perfect number.\n",i);
	}
	
	
	return 0;
}
