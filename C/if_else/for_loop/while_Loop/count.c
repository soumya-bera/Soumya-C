/*#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);


    //int count=0;
    //while(n!=0){
    //    n=n/10;
    //    count++;
    //}
    //printf("%d",count);


    //int sum=0;
    //int lastnumber=0;
    //while(n!=0){
    //    lastnumber=n%10;
    //    sum=sum+lastnumber;
    //    n=n/10;
   // }
   // printf("%d",sum);


   //int lastnumber=0;
   //int reverse=0;
   //while(n!=0){
   // lastnumber=n%10;
   // reverse=reverse*10+lastnumber;
   // n=n/10;
  // }
  // printf("%d",reverse);


  //int lastnumber=0;
  //while(n!=0){
  //  lastnumber=n%10;
  //  if(lastnumber%2==0){
  //      printf("%d ",lastnumber);
  //  }
  //  n=n/10;
 // }

 /*int count=0;
 for(int j=1;j<=100;j++){
 for(int i=1;i<=j;i++){
    if (j%i==0){
        count++;
    }
}
    if(count==2){
        printf("%d ",count);
    }
    else printf("composite number");
}


  /*int a=1;
  int b=1;
  int sum;
  for(int i=1;i<=n;i++){
    printf("%d ",a);
    sum=a+b;
    a=b;
    b=sum;
  }*/
  


    /*int ft=1,sd=1,next;
    for(int i=1;i<=n;i++){
            printf("%d ",ft);
            next=ft+sd;
            ft=sd;
            sd=next;
        }*/
   /* return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    printf("Enter a string: ");
    scanf("%s",&str);   // or use fgets(str, sizeof(str), stdin);

    len = strlen(str);
    printf("%d",len);

    /*(for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    if(str[i]==str[len-i-1])
    printf("palindrom");
    else
    printf("not palindrom");*/
    return 0;
}
