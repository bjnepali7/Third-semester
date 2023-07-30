#include<stdio.h>
#include<math.h>

int power(int x,int n ){
if(n==0){
    return 1;
}else{
return (x*power(x,n-1));
}
}

int main(){
    int x,n;
    printf("enter the value of x and n:");
    scanf("%d\n%d",&x ,&n);
    power(x,n);
    printf("the power of x^n is %d",power(x,n));

return 0;
}
