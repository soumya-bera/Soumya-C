#include<stdio.h>
void swap(int *a , int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    //*a=*a+*b;
    //*b=*a-*b;
    //*a=*a-*b;
}
int main(){
    int a,b;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("The value of first number is :%d\n",a);
    printf("The value of second number is :%d",b);
    return 0;
}