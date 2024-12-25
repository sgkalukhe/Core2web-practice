#include<stdio.h>
void main() {
int x;
printf("Enter the Number\n");
scanf("%d",&x);

if(x%4==0&&x%5==0){
	printf("Your Number is divisible by 4 and 5");
}
else{
	printf("Your Number is not divisible by 4 and 5");
}
}
