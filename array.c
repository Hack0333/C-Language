//Array operation
#include<stdio.h>

void insert(int arr[],int size,int item,int pos,int capacity){
    if(size >= capacity){
        printf("overFlow\n");
    }
    else{
        for(int i= size-1; i>=pos; i--){
            arr[i+1]=arr[i];
        }
        arr[pos]=item;
    }

}

void delete(int arr[], int size, int pos, int capacity){
    if(size<1){
        printf("Underflow\n");
    }
    else{
        for(int i=size-1; i>=pos;i--){
            arr[i]=arr[i+1];
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
    int array[50],size,ch,position,element;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    input(array,size);
    display(array,size);
    do{
        printf("|...Operation in Array...|\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Exit\n");
        printf("Enter Your Choice:\t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:display(array,size);
                break;

        case 2:printf("Enter the element you want to insert: ");
                scanf("%d",&element);
                printf("Enter the position you want to insert: ");
                scanf("%d",&position);
                insert(array,size,element,position,50);
                size=size+1;
                display(array,size);
                break;

        case 3:printf("Enter the position you want to delete: ");
                scanf("%d",&position);
                delete(array,size,position,50);
                size=size--;
                display(array,size);
                break;

        case 4:exit (0);
                break;
        
        default:printf("INVALID INPUT\n");
                break;
        }
    }while(ch != 4);
    
return 0;
}