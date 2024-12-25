#include<stdio.h>
void main() {
	int row;
	printf("Enter Row\n");
	scanf("%d",&row);

	for(int i=1;i<=row;i++){
		for(int sp=row-1;sp>=i;sp--){
			printf("_");
		}
	        int x=1;	
		char ch='A';
		for(int j=1;j<=i;j++){
			if(j%2==0){
			printf("%c",ch);
		        ch++;
			}
			else{
				printf("%d",x);
			        x++;
			}
		}
		printf("\n");
	}
}
