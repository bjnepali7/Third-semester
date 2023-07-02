//factorial of a non negative integer using recursion
#include<stdio.h>
#include<math.h>


int fact(int n){
if(n==1||n==0){

    return 1;
}else{


return n*fact(n-1);
}
}


int main(){
    int num;
    do{
        printf("enter the number:");
        scanf("%d",&num);

    }while(num<0);
    printf("the factorial is %d",fact(num));

    return 0;


}
