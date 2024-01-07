#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Calculates the sum of the serie of x-x^3+x^5 ......
int main(){
	int i,cnt=1,x,n,power=3,sum=0;
	printf("Enter a number: \n"); scanf("%d",&x);
	printf("Enter the length of the series: \n"); scanf("%d",&n);
	sum=x;
	for(i=2;i<=n;i++){
		if(cnt % 2 == 1){
			sum-=pow(x,power);
			cnt++;
			power+=2;
		}
		else{
			sum+=pow(x,power);
			cnt++;
			power+=2;
		}
		
	}
	
	printf("Sum of the series is:%d \n",sum);
	
	return 0;
}
