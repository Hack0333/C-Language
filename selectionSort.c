#include<stdio.h>

void selectionSort(int arr[],int size){
    int temp;
    for(int i=0;i<size-1;i++){

        int minIndex = i;
        
        for(int  j=i+1;j<size;j++){

            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        temp = arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
    }
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
    int array[5];

    input(array,5);
    display(array,5);

    selectionSort(array,5);

    display(array,5);

    
return 0;
}