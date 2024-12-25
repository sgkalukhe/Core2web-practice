//Sum of Addition of diagonal Element




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
	for(int i=1;i<=row;i++)
	{
                for(int j=1;j<=col;j++)
                {
                        scanf("%d",&arr[i][j]);
                }
        }

        printf("Array\n");


        for(int i=1;i<=row;i++)
        {
                for(int j=1;j<=col;j++)
                {
                        printf(" %d ",arr[i][j]);

			if(i==j)
			{
                        sum=sum+arr[i][j];
			}
			if(i==1&&j==col)
			{
                        sum=sum+arr[i][j];
			}
                        if(i==row&&j==1)
			{
		        sum=sum+arr[i][j];
			}
                }
                printf("\n");
	}
	printf("Sum of diagonal Element= %d ",sum);
}
