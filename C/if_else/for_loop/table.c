#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of table :");
    scanf("%d",&n);
    for(int i=n;i<=10*n;i=i+n){
        printf("%d ",i);
    }
    return 0;
}