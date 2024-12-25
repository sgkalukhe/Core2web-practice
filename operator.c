#include<stdio.h>
void main() {
	int x=9;
	int ans;

      /*  int a= ++x ;
        int b= x++;
        int c= ++x;
	ans=a+b+c;  */
	
	ans= ++x + x++ + ++x; 

	printf("%d\n",ans);//

	int ans1;
	x=9;

	ans1= ++x + ++x + ++x + ++x;
        printf("%d\n",ans1);


	int ans2;
	x=9;

	ans2= x++ + x++ + ++x + x++ + ++x;
	printf("%d\n",ans2); // 60


	x=9;
	int ans3;
	ans3= x++ + x++ + x++ + x++;
	printf("%d\n",ans3); //43



       

}
