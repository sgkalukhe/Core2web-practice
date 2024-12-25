#include<stdio.h>
void main() {
        int budget;
        printf("Enter no from 1 to 4\n");
        scanf("%d",&budget);

	switch(budget) {
		case 1: printf("One\n");
		break;
		case 2: printf("Two\n");
		break;
		case 3: printf("Three\n");
		break;
		case 4: printf("Four\n");
	        break;
		default:
		    printf("You Entered incorrect\n");
		    break;
	}
}
