#include<stdio.h>
void main() {

        
	int num;
	char chr;
	float rs;
	double crMoney;
	
	
	printf("Enetr num =\n");
	scanf("%d",&num);


	printf("Enter any character=\n");
	scanf("  %c", &chr);

	
        printf("Enter any decimal no=\n");
        scanf("%f",&rs);


	printf("Enter any long decimal no=\n");
        scanf("%lf",&crMoney);

        
        printf("size of num variable = %ld\n",sizeof(num));
        printf("size of chr variable = %ld\n",sizeof(chr));
        printf("size of rs variable = %ld\n",sizeof(rs));
        printf("size of crMoney variable = %ld\n",sizeof(crMoney));




}	
