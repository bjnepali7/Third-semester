#include<stdio.h>

void bubbleSort(int A[], int size){
int temp,i,j;
for(i=0;i<size-1;i++){
    for(j=0;j<size-1-i;j++){

        if(A[j]>A[j+1]){
            temp=A[j];
            A[j]=A[j+1];
            A[j+1]=temp;

        }

    }
}
}
int main(){
int arr[10],size;
printf("enter the size of array=");
scanf("%d",&size);
printf("enter the elements:\n");
int i;
for(i=0;i<size;i++){
    scanf("%d",&arr[i]);

}
bubbleSort(arr,size);
printf("sorted elements are :");
for(i=0;i<size;i++){
    printf("%d \n",arr[i]);

}
return 0;



}
