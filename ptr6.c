//pointer to an Array in 1d




#include<stdio.h>

void main() 
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={10,20,30,40,50};

	int *ptr1=arr1;
	int *ptr2=&arr1[0];

	ptr1++;
	ptr2++;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	printf("%d\n",*ptr1);
        printf("%d\n",*ptr2);
}
