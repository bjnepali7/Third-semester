#include<stdio.h>
#include<math.h>



int fab(int n){
 if(n<=1){
    return 1;
 }else{

 return fab(n-1)+fab(n-2);
 }

}

int main(){


int num,i;
do{

printf("enter the number:");
scanf("%d",&num);

}while(num<0);
for(i=1;i<=num;i++){
    printf("fabinocci is%d\n",fab(i));
}
return 0;
}
