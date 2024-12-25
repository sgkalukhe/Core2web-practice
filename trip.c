#include<stdio.h>
void main() {
	int budget;
	printf("Buget of Trip\n");
	scanf("%d",&budget);

	if(budget>=100000){
		printf("Delhi\n");
	}
	else if(budget>=50000){
		printf("Agra\n");
	}
        else if (budget>=25000){
	printf("Surat\n");
	}
	else if(budget>=15000){
		printf("Mumbai\n");
	}
	else{
		printf("Home");
	}
}


  
