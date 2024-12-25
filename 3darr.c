//Printing of 3D Array



#include<stdio.h>
void main() {
	int sum=0;
        int a,b,c;
	printf("Enter no of Plane\n");
	scanf("%d",&a);
	printf("Enter no of Row\n");
	scanf("%d",&b);
	printf("Enter no of Column\n");
	scanf("%d",&c);
	int arr[a][b][c];
	printf("Enter values\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<c;k++){
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	        for(int i=0;i<a;i++)
		{
			printf("Plane %d of array\n",i); 
                   for(int j=0;j<b;j++)
		   {
                        for(int k=0;k<c;k++)
			{
				printf(" %d ",arr[i][j][k]);
			}
			printf("\n\n");
		   }
		}
                                
}
