#include<stdio.h>

int main(){
    int arr1[10][10],arr2[10][10],arr3[10][10];
    int row1,col1,row2,col2;

    printf("Enter the row and column of 1st Array\n");
    scanf("%d",row1);
    scanf("%d",col1);

    printf("Enter the element 1st Array\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++)
            scanf("%d",&arr1[i][j]);
    }

    printf("Enter the row and column of 2nd Array\n");
    scanf("%d",row2);
    scanf("%d",col2);

    printf("Enter the element 2nd Array\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++)
            scanf("%d",&arr2[i][j]);
    }

    printf("Printing array 1st array\n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++)
            printf("%d",&arr1[i][j]);
        printf("\n");
    }

     printf("Printing array 2nd array\n");
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++)
            printf("%d",&arr2[i][j]);
        printf("\n");
    }

    if(col1==row2){
        printf("Your result is\n");
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                arr3[i][j]=0;
                for(int k=0;k<col1;k++){
                    arr3[i][j] += arr1[i][k]*arr2[i][k];
                }
                printf("%d",arr3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Can't Multiply the array\n");
    }

return 0;
}