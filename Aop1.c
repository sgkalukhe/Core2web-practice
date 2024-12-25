//Array of Pointer


#include<stdio.h>

void main()
{
	int x=10;
	int y=20;
	int z=30;

	int* arr[3]={&x,&y,&z};
        int **ptr=&arr[0];
	int **ptr1=&arr[1];

	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
        printf("%p\n",arr[2]);



	printf("%p\n",*(arr+0));
	printf("%p\n",*(arr+1));
	printf("%p\n",*(arr+2));



	printf("%p\n",ptr);
	printf("%p\n",ptr1);

	printf("%ld\n",sizeof(arr));

}
