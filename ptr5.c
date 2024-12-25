//Relation between array and Pointer


#include<stdio.h>

void main()
{
	int size;
	printf("Enter size of Array\n");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElement in array\n");
	for(int i=0;i<size;i++)
        {
                printf("%d\n",arr[i]);
        }
	printf("\nShowing selected no\n");
	int x;
	printf("\nEnter index no\n");
                scanf("%d",&x);

	printf("%d\n",arr[x]);
	printf("%d\n",*(arr+x));
}
