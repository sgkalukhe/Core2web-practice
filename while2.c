#include<stdio.h>
void main() {
	int x,i;
	printf("Enter Days Reamning\n");
	scanf("%d",&x);

	i=x;
	while(i>=0){
		if(i>=1){
		printf("%d Days remeaning\n",i);
		}
		else{
			printf("Due Day\n");
		}
		i--;
	}
	
}
