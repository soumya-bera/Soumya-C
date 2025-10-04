#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int m;
    printf("Enter the power :");
    scanf("%d",&m);
    int p=pow(n,m);
    printf("The power of %d to the power %d is :%d",n,m,p);
    return 0;
}