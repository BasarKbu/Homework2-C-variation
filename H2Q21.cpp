#include<stdio.h>
//Calculates this series of 1+11+111+1111+... n terms
int main(){
	int n,sum=0,cnt=1,i;
	printf("Enter the character count: \n"); scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=cnt;
		cnt*=10;
		cnt++;
	}
	printf("The sum of the series is:%d \n",sum);
	
	return 0;
}
