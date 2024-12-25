//Array of pointer to an array



#include<stdio.h>
void main()
{
	int arr1[5]={1,2,3,4,5};
	int arr2[5]={6,7,8,9,10};
	int arr3[5]={11,12,13,14,15};
	int arr4[5]={16,17,18,19,20};


	int (*ptr[4])[5]={&arr1,&arr2,&arr3,&arr4};
	printf("%p\n",(ptr[3])[2]);
	printf("%p\n",(ptr[0])[1]);
	printf("%p\n",(ptr[1])[3]);
	printf("%p\n",(ptr[2])[3]);
}
