#include<stdio.h>
int main(){
    int n;
    printf("Enter a numbr: ");
    scanf("%d",&n);
    float a=100;
    for(float i=1;i<=n;i++){
        printf("%f ",a);
        a=a/2;
    }
    return 0;
}