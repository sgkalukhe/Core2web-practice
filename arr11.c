//2D Array Accepting value from user



#include<stdio.h>

void main()
{
	int arr[2][3];
	printf("Enter Element of Array\n");

	for(int i=0;i<2;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n\nArray\n");
	for(int i=0;i<2;i++)
        {
                for(int j=0;j<3;j++)
                {
                        printf(" %d ",arr[i][j]);
                }
        printf("\n");
	}
}
