#include<stdio.h>
#include<stdlib.h>

int main(){
	int s,l,area,perimeter;
	printf("Enter a rectangle's short side: \n"); scanf("%d",&s);
	printf("Enter a rectangle's long side: \n");  scanf("%d",&l);
	perimeter=2*(s+l);
	area=s*l;
	printf("The perimeter of the rectangle:%d \n",perimeter);
	printf("The area of the rectangle:%d \n",area);
	
	
	
	return 0;
}
