#include<stdio.h>

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key)
            return 1;
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
  int array[6],key,ans;

  input(array,6);
  display(array,6);

  printf("Enter the Element you want find :\t");
  scanf("%d",&key);

  ans = linearSearch(array,6,key);

  if(ans){
    printf("Element Found\n");
  }
  else{
    printf("Element  not Found\n");
  }
  

return 0;
}