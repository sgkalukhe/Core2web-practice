#include<stdio.h>
void main()
{

        int x=5;
        int y=6;
        int ans;


        /* this indiual example is solved by taking x=5 for every example*/


//1 
/*      printf("%d\n",x);   //5
        ans=++x + ++x;
        printf("%d\n",ans);  //14
        printf("%d\n\n\n",x);    //7

//2 
        ans= x++ + x++ ;
        printf("%d\n",ans);   //11
        printf("%d\n\n\n",x);        //7


//3 
        ans= x++ + ++x + ++x ;
        printf("%d\n",ans);   //20
        printf("%d\n\n\n",x);          //8 */


     
        ans= ++y + ++y + ++y + y++ ;
        printf("%d\n",ans);  //34
        printf("%d\n\n\n",y);   //10


}
