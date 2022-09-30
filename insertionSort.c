#include<stdio.h>

void insertionSort(int arr[],int size){
    int temp,j;

    for(int i=1; i<size; i++){
        temp = arr[i];
        j=i-1;
        while (j>=0)
        {
           if(arr[j] > temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        
        arr[j+1]=temp;
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

    insertionSort(array,5);
    display(array,5);
    
return 0;
}