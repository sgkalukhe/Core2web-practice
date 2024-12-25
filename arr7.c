// if any member divisible by 4&5


#include<stdio.h>
void main() {
	int size;
	int flag=0;
	printf("Enter the Size of Array\n");
	scanf("%d",&size);
	int arr[size];
	
        printf("Enter elements of array\n");
	for(int i=0;i<size;i++){
	 scanf("%d",&arr[i]);
	 }

	 for(int i=0;i<size;i++){
	 if(arr[i]%4==0||arr[i]%5==0){
	  flag=1;
	 }
	 if(flag==1){
		 printf("Found\n");
	 }
	 else
	 {
		 printf("Not Found\n");
	 }

	 }
}
	 
            	
