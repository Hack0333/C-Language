#include<stdio.h>

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;

    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

        mid = start + (end - start)/2;
    }
    return 0;
}

void input(int arr[],int n){
    printf("Enter the Element in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}

void display(int arr[],int n){
    printf("\nPrinting array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}


int main(){
    int array[5],key,index;

    input(array,5);
    display(array,5);

    printf("Enter the Element you want find :\t");
    scanf("%d",&key);

    index = binarySearch(array,5,key);
    if(index == 0){
        printf("Element not found\n");
    }
    else{
        printf("Index of %d is : %d",key,index);
    }
  
return 0;
}