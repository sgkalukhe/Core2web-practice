#include<stdio.h>
void main() {
	float pmoney;
	printf("Enter Your Pocket Money\n");
	scanf("%f",&pmoney);

	if(pmoney>=2500){
		printf("Jakson INN\n");
	}
	else if(pmoney>=2000&&pmoney<2500){
		printf("Padmavati\n");
	}
	else if(pmoney>=1500&&pmoney<2000){
		printf("Kinara\n");
	}
	else if(pmoney>=1000&&pmoney<1500){
		printf("Bhojraj\n");
	}
	else{
		printf("HOME\n\n");
	}
}

