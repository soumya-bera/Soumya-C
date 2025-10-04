#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        //for(int p=1;p<=(2*i-1);p++){
            //if(p<=i)
                //printf("%d",p);
           // else
               // printf("%d",2*i-p);
        //}
        for(int p=1;p<=i;p++){
            printf("%d",p);
        }
        for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}