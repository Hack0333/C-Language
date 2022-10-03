#include<stdio.h>
#define MAX 10
int stack[MAX];
int top = -1;

void push(int data){
    if(top == MAX-1){
        printf("OverFlow Condition\n");
    }
    top++;
    stack[top]=data;
}

void pop(){
    int temp;
    if(top == -1){
        printf("Underflow condition\n");
    }
    else{
        temp = stack[top--];
        printf("Item poped = %d",temp);
    }
}

void peep(int pos){
    int temp;
    if(top - pos +1 < 0){
        printf("stack is Empty\n");
    }
    else{
        temp = stack[top -pos +1];
        printf("The value at %d position is: %d",pos,temp);
    }
}

void display(){
    int ptr = top;
    if(top == -1){
        printf("Stack is empty\n");
    }
    else{
        while (ptr != -1)
        {
            printf("|%d|",stack[ptr]);
            ptr--;
        } 
    }
}


int main(){
    int ch,data,pos;

    do{
        printf("\n|...Operation in Stack...|\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peep\n");
        printf("4. Display\n");
        printf("5. exit\n");
        printf("Enter Your Choice:\t");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:printf("Enter the element you want to push\n");
                scanf("%d",&data);
                push(data);
                display();
                 break;

        case 2:pop();
                break;

        case 3:printf("Enter the position\n");
                scanf("%d",&pos);
                peep(pos);
                 break;

        case 4:display();
                break;

        case 5:exit (0);
                break;
        
        default:printf("INVALID INPUT\n");
                break;
        }
    }while(1);
    
return 0;
}