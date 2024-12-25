//Void Pointer



#include<stdio.h>

void main()
{
	int x=10;
	char ch='A';
	double d=10.35;
	float f=1.5;


	void *pt1=&x;
	void *pt2=&ch;
	void *pt3=&d;
	void *pt4=&f;

	printf("%d\n",*((int*)pt1));
        printf("%c\n",*((char*)pt2));
        printf("%lf\n",*((double*)pt3));
	printf("%f\n",*((float*)pt4));

}
