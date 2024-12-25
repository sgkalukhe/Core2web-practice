#include<stdio.h>
void main() {

	int x;
	int y;

	printf("Enter First Value\n");
        scanf("%d",&x);
        printf("Enter second Value\n");
        scanf("%d",&y);

	if(x<y){
		printf("Minimum no is %d\n",x);
	}
	else
		printf("Minimum no is %d\n",y);
}
