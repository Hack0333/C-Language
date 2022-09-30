#include<stdio.h>

void bubbleSort(int arr[],int size){
    int temp;
    for(int i=1; i<size; i++){

        for(int j=0; j<size-i; j++){
            
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(array,5);
    display(array,5);
    
return 0;
}