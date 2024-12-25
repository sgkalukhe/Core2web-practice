#include<stdio.h>
void main() {
	int row;
	printf("Enter Row\n");
	scanf("%d",&row);
	for(int i=1;i<=row;i++){
		int x=1;
		char ch='A';
	  for(int j=row;j>=i;j--){
		  if(j%2==0){
			  printf("%d",x);
			  x++;
		  }
		  else{
			  printf("%c",ch);
			  ch++;
		  }
	  }
	  printf("\n");
	}
}
