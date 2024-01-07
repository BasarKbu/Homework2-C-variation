#include<stdio.h>
#include<stdlib.h>

int main(){
int smallest=1,n1,n2,i,j,cnt1=0,cnt2=0;	
	printf("Enter the first number: \n"); scanf("%d",&n1);
	printf("Enter the second number: \n"); scanf("%d",&n2);
for(j=1;j<n1;j++){
	
	if(n1 % j == 0){
		cnt1++;
	}
	if(n2 % j == 0){
		cnt2++;
	}
	
}
	if(n2>n1){
	int temp=n1;
	n1=n2;
	n2=temp; 
}

	else{
		
		for(i=2;i<=(n1/2);i++){
			if(n1 % i==0 && n2 % i==0){
			    if(i<smallest){
			        smallest=i;
			    }
			}
		}
		
	}
	
	
	if(cnt1 == 0 || cnt2 == 0){
	printf("Least common multiple is 1 beacause the 1 of the numbers or both of them are prime.\n");
	exit(0);
}
	printf("Least common multiple is:%d ",smallest);
	
	
	return 0;
}
