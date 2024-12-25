//pointer to pointer




#include<stdio.h>
void main()
{
	int x=10;
	int *ptr=&x;
	int *ptr1=ptr;
	int **ptr2=&ptr;

	printf("%p\n",ptr);
	printf("%d\n",*ptr);
	printf("%d\n",*ptr1);
	printf("%d\n",**ptr2);
}
