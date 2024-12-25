#include<stdio.h>
void main () {
	int iarr [5] = {10,20,30,40,50};

	printf("%d\n",iarr[1]);
	printf("%p\n",iarr);
	printf("%p\n",&iarr[0]);
	printf("%p\n",&iarr[1]);
	printf("%p\n",&iarr[2]);
	printf("%p\n",&iarr[3]);
	printf("%p\n",&iarr[4]);
}
