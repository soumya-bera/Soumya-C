#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter second number :");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d number is the greatest number",a);
    }
    else if(b>a && b>c){
        printf("%d number is the greatest number",b);
    }
    else printf("%d number is the greatest number",c);
    
    return 0;
}