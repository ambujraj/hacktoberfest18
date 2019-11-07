#include <stdio.h>
#include <stdlib.h>

// Node of the circular linked list.
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

// Handle of the list.
// Head points to the first node in the list.
// Tail points to the last node in the list.
typedef struct List
{
    Node *head;
    Node *tail;
    int length;
} List;

// Initializes a cirucular linked list.
List* initialize_list();

// Creates a node and stores the data in it.
Node* create_node(int data);

// Inserts data at the head of the list.
void insert_head(List* cll, int data);

// Deletes the node at the head position. No operation if list is empty.
void delete_head(List* cll);

// Swaps the first(Head) and last(Tail) element.
void swap_first_and_last(List* cll);

// Prints the data present in the safe node according to the josephus problem.
int josephus(List* cll, int k);

// Prints the entire list. Prints "EMPTY" if the list is empty.
void display(List* cll);

// Deallocates resources held by the list.
void destroy_list(List* cll);


int main()
{
    List* cll = initialize_list();
    int ele, choice, pos, k;
    do
    {
        scanf("%d",&choice);
        switch(choice)
        {
            // Insert at Head.
            case 1:
                scanf("%d",&ele);
                insert_head(cll,ele);
                break;

            // Delete at Head.
            case 2:
                delete_head(cll);
                break;

            // Josephus problem.
            case 3:
                scanf("%d",&k);
                ele = josephus(cll,k);
                printf("%d\n",ele);
                break;

            // Swap first and last element.
            case 4:
                swap_first_and_last(cll);
                break;

            // Print entire list.
            case 5:
                display(cll);
                break;  
        }
    }
    while (choice != 0);

    destroy_list(cll);
    return 0;
}

List* initialize_list()
{
    List *list =(List*)malloc(sizeof(List));
    list->head=NULL;
    list->tail=NULL;
    list->length=0;
    return list;
}

Node* create_node(int data)
{
    Node *temp=(Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}

void insert_head(List* cll, int data)
{

    Node *temp=create_node(data);
    if(cll->head==NULL) // if(length==0)
    {
        temp->next=temp;
        cll->head=temp;
        cll->tail=temp;
    }
    else 
    {
        temp->next=cll->head;
        cll->tail->next=temp;
        cll->head=temp;
    }// TODO
    cll->length+=1;
    return;
}

void delete_head(List* cll)
{
    if(cll->head==NULL)
    {
        return;
    }
    else if(cll->head->next==cll->head)
    {
        free(cll->head);
        cll->head=NULL;
        cll->tail=NULL;
        cll->length-=1;
        return;
    }
    else
    {
        Node *temp=cll->head;
        cll->head=temp->next;
        free(temp);
        cll->tail->next=cll->head;
        cll->length-=1;
        return;
    }
}

void swap_first_and_last(List *cll)
{
    if(cll->length==0)
    {
        return;
    }
    else if(cll->length==1)
    {
        return;
    }
    else
    {
        int temp1;
        temp1=cll->head->data;
        cll->head->data=cll->tail->data;
        cll->tail->data=temp1;
    }
}

int josephus(List *cll, int k)
{
    if(cll->length==0 || cll->length==1)
    {
        return;
    }
    else if(cll->length==2)
    {
        if(k==0)
        {
            free(cll->tail);
            cll->tail=cll->head;
            
        }
        else
        {
            free(cll->head);
            cll->head=cll->tail;
        }
        cll->length-=1;
        return cll->head->data;
    }
    else
    {
        Node *temp=cll->head;
        for(int i=0;i<k;i++)
        {
            temp=temp->next;
        }
        Node *kill;
        while(cll->length>1)
        {
            kill=temp->next;
            temp->next=kill->next;
            temp=kill->next;
            free(kill);
            cll->length-=1;
        }
        cll->head=temp;
        cll->tail=temp;
        return temp->data;
    }
}

void display(List* cll)
{
    Node *temp=cll->head;
    if(cll->head==NULL)
    {
        printf("EMPTY");
    }
    else
    {
        while(temp->next!=cll->head)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
    }printf("\n");
}

void destroy_list(List* cll)
{
    Node *temp;
    while(cll->length!=0)
    {
        temp=cll->head;
        cll->head=temp->next;
        free(temp);
        cll->length-=1;
    }
}
