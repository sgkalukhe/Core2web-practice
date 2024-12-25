// Subtraction of Pointer


#include<stdio.h>
void main()
{
	int arr[5]={1,2,3,4,5};

	int *pt1=&arr[0];
	int *pt2=&arr[3];

	printf("%p\n",pt1);
	printf("%p\n",pt2);
	printf("%ld\n",pt1-pt2);
	printf("%ld\n",pt2-pt1);
}
