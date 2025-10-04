#include<stdio.h>
int main(){
    int cp,sp;
    printf("Enter cost price :");
    scanf("%d",&cp);
    printf("Enter sellling price :");
    scanf("%d",&sp);
if(cp>sp){
printf("loss");
}
else if (cp<sp){ 
printf("profit");
}
else ("No profit no loss");
    return 0;
}