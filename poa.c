//pointer to an array



#include<stdio.h>

void main()
{

	int arr[5]={1,2,3,4,5};
	int *ptr=&arr[2];
	int (*ptr1)[5]=&arr;

        
	printf("%p\n",ptr1);
	printf("%d\n",**ptr1);
	//printf("%d\n",ptr1);
}
