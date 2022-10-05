#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *Start = NULL;

void Create(int num)
{
    struct Node *n, *ptr;
    if (Start == NULL)
    {
        struct Node *temp;
        temp = (struct Node *)malloc(sizeof(struct Node));
        Start = temp;
        temp->data = num;
        temp->next = NULL;
    }
    else
    {
        ptr = Start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        n = (struct Node *)malloc(sizeof(struct Node));
        n->data = num;
        n->next = NULL;
        ptr->next = n;
    }
    printf(".......Node created.......\n");
}

void Traverse()
{
    struct Node *ptr;
    if (Start == NULL)
    {
        printf("......List is Empty.......\n");
    }
    else
    {
        ptr = Start;
        while (ptr != NULL)
        {
            printf("Element is : %d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}

void insertAtBegin(int num)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = num;
    if (Start == NULL)
    {
        Start = temp;
        temp->next = NULL;
    }
    else
    {
        temp->next = Start;
        Start = temp;
    }
}

void insertAtEnd(int num)
{
    struct Node *temp, *ptr;
    temp = (struct Node *)malloc(sizeof(struct Node));
    ptr = Start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->data = num;
    temp->next = NULL;
    ptr->next = temp;
}

void insertAtPos(int pos, int num)
{
    struct Node *temp, *ptr;
    ptr = Start;
    for (int i = 1; i < pos; i++)
    {
        ptr = ptr->next;
        if (ptr == NULL)
        {
            printf("less the %d elements\n", pos);
        }
    }
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = num;
    temp->next = ptr->next;
    ptr->next = temp;
}

int main()
{
    int num, choice, ch, position;
    do
    {
        printf("1. To Create a node\n");
        printf("2. To Traverse the list\n");
        printf("3. To Insert at the Beginning\n");
        printf("4. To Insert at the End\n");
        printf("5. To insert at a Specific a position\n");
        printf("6. To Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data you want to add in the list\n");
            scanf("%d", &num);
            Create(num);
            break;
        case 2:
            Traverse();
            break;

        case 3:
            printf("Enter the data you want to add in the list\n");
            scanf("%d", &num);
            insertAtBegin(num);
            break;

        case 4:
            printf("Enter the data you want to add in the list\n");
            scanf("%d", &num);
            insertAtEnd(num);
            break;

        case 5:
            printf("Enter the position u want to insert the node\n");
            scanf("%d", &position);
            printf("Enter the data you want to add in the list\n");
            scanf("%d", &num);
            insertAtPos(position, num);
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("INVALID INPUT\n");
            break;
        }
    } while (1);

    return 0;
}