#include<stdio.h>
void main() {

	int x;

	printf("Enter no\n");
	scanf("%d",&x);

	if(x%5==0&&x%11==0){
		printf("No is divisible by 5 & 11");
	}
	else
		printf("Not divisible by 5 & 11");
}        
