#include<stdio.h>
int main(){
    int marks[10]={45,23,67,89,90,12,25,78,19,99};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d\n",i);
        }
    }
    return 0;
}