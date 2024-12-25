//Comparison of two element


#include<stdio.h>
void main() {
	int flag=0;
	int arr1[3]={1,2,3};
	int arr2[3]={1,2,3};

	for(int i=0;i<3;i++){
		if(arr1[i]==arr2[i]){
			flag=1;
		}
	}
	if(flag==1){
		printf("Arrays are Equal");
	}
	else
	{
		printf("Arrays are not Equal");
	}
}
