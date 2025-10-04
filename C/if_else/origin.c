#include<stdio.h>
int main(){
    int x;
    printf("Enter x cordinate :");
    scanf("%d",&x);
    int y;
    printf("Enter y cordinate :");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("The cordines lies on origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("lies on x-axis");
    }
    else printf("The cordinates does not lies on x-axis or y-axis");
    return 0;
}