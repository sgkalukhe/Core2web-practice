#include<stdio.h>
void main() {  


	char ch;

	printf("Enter character\n");
        scanf(" %c",&ch);

	if(ch>='A'&&ch<='Z'){
                printf("You Entered UPPERCASE\n");
        }
        else
                printf("You Entered lowercase\n");
}
