#include<stdio.h>
void main() {
	int rent;
	printf("Enter the Rent\n");
	scanf("%d",&rent);
	printf("%d\n",rent);

	if(rent>4500&&rent<=5000){
		printf("Then sidhya palat palat rahing");
	}
	if(rent>=5001&&rent<=5500){
		printf("Sidhya vichhar karing");
	}
	if(rent>=5501&&rent<=6000){
		printf("Sidya Ghari paling");
	}

}
