#include<stdio.h>
#include<conio.h>
//Pascal triangle.
int main(){
	int i,j,row,space,coef = 1;
	printf("Enter the rows: \n"); scanf("%d",&row);
	
	
	for(i=0;i<row;i++){
		
		
	for(space=1;space<=row-i;space++){
		printf("  ");
	}
	for(j=0;j<=i;j++){
		if(j == 0 || i == 0)
		coef = 1;
		else
		coef = coef * (i-j+1) / j;
		
		printf("%4d",coef);
	}	
	printf("\n");	
	}
	
	
	getch();
	return 0;
}
