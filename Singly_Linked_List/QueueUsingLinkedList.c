#include <stdio.h>

struct node
{
	int info;
	struct node* link;
};

int isEmpty(struct node* front)
{
	return (front==NULL);
}

void insert(struct node **front, struct node **rear, int item)
{
	struct node* tmp;
	tmp = (struct node*)malloc(sizeof(struct node));
	if (tmp==NULL)
	{
		printf("Memory not available\n");
		return;
	}
	tmp->info=item;
	tmp->link=NULL;
	if (*front==NULL)
		*front=tmp;
	else
		(*rear)->link=tmp;
	*rear=tmp;
}

int del(struct node **front, struct node **rear)
{
	struct node* tmp;
	int item;
	if (isEmpty(*front))
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	tmp=*front;
	item=tmp->info;
	*front=(*front)->link;
	free(tmp);
	return item;
}

int peek(struct node* front)
{
	if (isEmpty(front))
	{
		printf("Queue Underflow\n");
		exit(1);
	}
	return front->info;
}

void display(struct node* front)
{
	struct node* ptr;
	ptr=front;
	if (isEmpty(front))
	{
		printf("Queue is empty!\n");
		return;
	}
	printf("Queue elements : \n");
	while (ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->link;
	}
	printf("\n\n");
}

int main()
{
	struct node* front=NULL;
	struct node* rear=NULL;
	int choice, item;
	while (1)
	{
		printf("1. Insert\n");
		printf("2. Delete\n");
		printf("3. Display element at the front\n");
		printf("4. Display all elements of the queue\n");
		printf("5. Quit\n");
		printf("Enter You Choice: ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("\nEnter the element to be inserted: ");
				scanf("%d",&item);
				insert(&front,&rear,item);break;
			case 2:
				item=del(&front,&rear);
				printf("\nThe deleted item is: %d\n\n",item);break;
			case 3:
				printf("\nItem at the front is: %d\n\n",peek(front));break;
			case 4:
				display(front);break;
			case 5:
				exit(1);
			default:
				printf("\nPlease enter a choice between 1 and 5\n\n");
		}
	}
	return 0;
}
