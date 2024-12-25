#include<stdio.h>
void main() {
	int x=1;
	printf("start code\n");

   if(--x){
	   printf("if block 1");
	  }
   if(++x||x++){
	   printf("if block 2");
	  }

}
