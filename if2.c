#include<stdio.h>
void main() {
	char userdata;
	printf("Enter character\n");
	scanf("%c",&userdata);

	if(userdata>='A'&&userdata<='Z'){
		printf("You Entered UPPERCASE Character\n");
	}
	if(userdata>='a'&&userdata<='z'){
		printf("You Entered LOWERCASE Character\n");
	}
}
	

	
