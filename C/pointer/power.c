#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int ans=a*power(a,b-1);
    return ans;
}
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    int b;
    printf("Enter power :");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d raised ti the power %d if %d",a,b,p);
    return 0;
}