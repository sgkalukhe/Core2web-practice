//Code for multi dimensional array(2D) and sum of all element of array


#include<stdio.h>


void main()
{
	int row;
	int col;
	int sum=0;

	printf("Enter no of rows\n");
	scanf("%d",&row);
        
	printf("Enter no of colums\n");
        scanf("%d",&col);

	int arr[row][col];

	printf("Enter elements of Array\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
        
	printf("Array\n");


	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			printf(" %d ",arr[i][j]);
			sum=sum+arr[i][j];
		}
		printf("\n");
	}
	printf("total Addition of Elemnt of Array= %d",sum);
}
