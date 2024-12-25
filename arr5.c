//Addition of Member


#include<stdio.h>
void main() {


        int x;
        printf("No of Element\n");
        scanf("%d",&x);
        int arr[x];
        int sum=0;

        printf("Enter Element\n");
        for(int i=0;i<x;i++){
                scanf("%d",&arr[i]);
        }
        printf("Element\n");
                for(int i=0;i<x;i++){
                        printf("%d\n",arr[i]);
                sum=sum+arr[i];
                }
        printf("%d\n",sum);
}
