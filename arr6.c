//Search


#include<stdio.h>
void main() {

	int size;
	printf("Enter Size of array\n");
	scanf("%d",&size);


	int arr[size];
	printf("Eneter Element\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	int search;
	int flag;
	printf("Enetr search Element\n");
	scanf("%d",&search);
	for(int i=0;i<size;i++){
		if(search==arr[i]){
	       	printf("Element at index %d match\n\n",i);
		}
		else
	      printf("Element at index %d don't match\n\n",i);
			}
	
}
