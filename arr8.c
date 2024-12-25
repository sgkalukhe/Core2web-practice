// Assaigning array to an array


#include<stdio.h>
void main() {
	int arr1[3];
	arr1[0]=1;
	arr1[1]=2;
	arr1[2]=3;


	for(int i=0;i<3;i++){
		printf("%d\n",arr1[i]);
	}

	printf("Element of Array2\n");

	int arr2[3];
	for(int i=0;i<3;i++)
	{
        arr2[i]=arr1[i];
        }
	for(int i=0;i<3;i++){
                printf("%d\n",arr2[i]);
        }
}


