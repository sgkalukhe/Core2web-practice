#include<stdio.h>

char* mystrrev(char *str){

        char *temp=str;

        while(*temp != '\0')
        {
                *temp++;
        }
        temp--;

	char x;

        while(str<temp)
        {
                x=*str;
                *str=*temp;
                *temp=x;

                *str++;
                *temp--;
        }
        return str;


}

void main()
{
        char str[20]={'S','h','u','b','h','a','m','\0'};

        mystrrev(str);

                puts(str);
}

