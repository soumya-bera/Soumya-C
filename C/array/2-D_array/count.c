#include<stdio.h>
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxcount=0;
    int maxidx=-1;
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(maxcount<count){
            maxcount=count;
            maxidx=i;
        }
    }
    printf("\n");
    printf("%d\n",maxcount);
    printf("%d",maxidx);
    return 0;
}