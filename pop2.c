// Double pointer or Double Pointer



#include<stdio.h>

void main()
{
	char ch='A';
	char *ptr1=&ch;
	char **ptr2=&ptr1;


	printf("%p\n",ptr1);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
	//printf("%d\n",ptr1);
}
