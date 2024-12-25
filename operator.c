#include<stdio.h>
void main () {
	int x=5;
	int y=7;
	int ans;

       	
//or 1
	ans= x||y;
	printf("%d\n",ans); 


        int q=5;
        int w=7;
        int ans1;	

	ans1= q&&w ;
	printf("%d\n\n\n",ans1); 


	
	
	int e=8;
        int r=11;
        int ans2;

        ans2= ++e || ++r;
	printf("%d\n",ans2);
	printf("%d\n",e);
	printf("%d\n\n\n",r);
 


	
	
	int u=8;
        int t=11;
        int ans3;

	ans3= u++ && ++t;
	printf("%d\n",ans3);
	printf("%d\n",u);
	printf("%d\n\n\n",t);



   
   	int a=8;
        int s=11;
        int ans4;
   
	ans4= a++ || ++s;
	printf("%d\n",ans4);
	printf("%d\n",a);
	printf("%d\n\n\n",s);



	
	
	int d=0;
        int f=5;
        int ans5;

	ans5= d++ & f++;
	printf("%d\n",ans5);
	printf("%d\n",d);
	printf("%d\n\n\n",f);
            



}
