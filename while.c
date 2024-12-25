#include<stdio.h>
void main()  {
	int x,y,z;
	printf("Enter strarting no\n");
	scanf("%d",&x);
	printf("Enter End no\n");
	scanf("%d",&y);

	z=x;
	while(z<=y){
		if(z%4==0&&z%5==0){
			printf("No are=  %d\n",z);
		}
		z=z+1;
	}
}
