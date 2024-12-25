#include<stdio.h>
void main() {
	int row;
	printf("Enters roes\n");
	scanf("%d",&row);
	
	for(int i=1;i<=row;i++){
		for(int sp=row-1;sp>=i;sp--){
			printf("  ");
		}
		char ch='A';
		for(int str=1;str<=i;str++){
			printf("%c ",ch);

		ch++;
		}
	printf("\n");
	}
}
