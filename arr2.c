#include<stdio.h>
void main () {

	int x;
	printf("How many no in Array\n");
	scanf("%d",&x);
	int arr[x];
	
	printf("Enetr element");
        for(int i=0;i<x;i++){
	      scanf("%d",&arr[i]);
	}

	printf("Elements are\n");
	for(int i=0;i<x;i++){
		printf("%d\n",arr[i]);
	}
}
