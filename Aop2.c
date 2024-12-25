// Array of Pointer with void pointer




#include<stdio.h>

void main()
{
	int x=10;
	char ch='A';
	double d=35.00567;


       void* arr[3]={&x,&ch,&d};

       printf("%p\n",arr[0]);
       printf("%p\n",arr[1]);
       printf("%p\n",arr[2]);

       printf("%d\n",*((int*)arr[0]));
       printf("%c\n",*((char*)arr[1]));
       printf("%f\n",*((double*)arr[2]));
}

