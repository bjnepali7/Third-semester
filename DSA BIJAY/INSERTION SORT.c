#include<stdio.h>


void inserstionSort(int arr[],int size){
int temp,i,j;
for(i=0;i<size;i++){

    j=i-1;
    temp=arr[i];
    while(temp<arr[j]&&j>=0){

        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
}


}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

    int main(){
    int size,arr[10];
    printf("eneter the size of array:");
    scanf("%d",&size);
    printf("\n enter the elements in array:");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);

    }
    printf("before sorting");
    printArray(arr,size);
    printf("\n");

   inserstionSort(arr,size);
    printf("after  sorting");
    printArray(arr,size);
    return 0;
    }


