

#include<stdio.h>


char* mystrncpy(char* str2,char*str1,int x){
	while(x!=0){
		*str2=*str1;
		*str1++;
		*str2++;
		x--;
	}
	*str2='\0';
	return str2;
}

void main(){
	char*str1="shubham kalukhe";
	char str2[20];
	int x;
	printf("Enter the no.\n");
	scanf("%d",&x);
	puts(str1);
	mystrncpy(str2,str1,x);
	puts(str2);
}
