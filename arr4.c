//Even elements are printed only

                                                                            #include<stdio.h>
void main () {
        
										    
										    printf("Enter Element\n");
        int arr[5];
        for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        }
        printf("Element\n");
        for(int i=0;i<5;i++){
        if(arr[i]%2==0){
        printf("%d\n",arr[i]);
        }

       }
}
