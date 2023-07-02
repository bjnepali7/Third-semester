#include<stdio.h>
#include<math.h>

int  gcd(int a, int b){
if (b==0){
    return a;
}else{

return gcd(b, a%b);
}
}

int main(){
int a,b;
do{
    printf("enter the first num:");
    scanf("%d",&a);
    printf("enter the second num:");
    scanf("%d",&b);

}while(a<0||b<=0);
printf("the gcd is:%d",gcd(a,b));
return 0;
}
