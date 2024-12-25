#include<stdio.h>

void main() {
	float income;
	printf("Enter your income");
	scanf("%f/n",&income);
	printf("%f/n",income);

	if(income >=0&& income <500000){
		printf("\n\nYou have to pay 0% Tax\n\n");
	};

        if( income >=500000&& income <1000000){
	         printf("\n\nYou have to pay 5% Tax\n\n");
	 

             	};	 
		 
        if( income >=1000000&& income<1500000){
                 printf("\n\nYou have to pay 10% Tax\n\n");
  
            };

	if( income >=1500000&&income <2000000){
                 printf("\n\nYou have to pay 15% Tax\n\n");
 
          };

        if( income >=2500000&& income <3000000){
                 printf("\n\nYou have to pay 25% Tax\n\n");

	};
	 if( income >=3000000){
                 printf("\n\nYou have to pay 28% Tax\n\n");
	};

}
