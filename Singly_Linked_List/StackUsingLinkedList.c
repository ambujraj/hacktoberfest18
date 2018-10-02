#include <stdio.h>

struct node
{
	int info;
	struct node* link;
};

int isEmpty(struct node* top)
{
	return (top == NULL);
}

int peek(struct node* top)
{
	if (isEmpty(top))
	{
		printf("Stack Underflow\n");
		return;
	}
	return top->info;
}

void push(struct node** top, int item)
{
	struct node *tmp;
	tmp= (struct node *)malloc(sizeof(struct node));
	if (tmp==NULL)
	{
		printf("Stack Overflow\n");
		return;
	}
	tmp->info=item;
	tmp->link=*top;
	*top=tmp;
}

int pop(struct node** top)
{
	int item;
	struct node* tmp;
	if (isEmpty(*top))
	{
		printf("Stack Underflow\n");
		return;
	}
	tmp=*top;
	item=tmp->info;
	*top=(*top)->link;
	free(tmp);
	return item;
}

void display(struct node* top)
{
	struct node* ptr;
	ptr=top;
	if (isEmpty(top))
	{
		printf("Stack is empty\n");
		return;
	}
	printf("Stack elements are: \n");
	while (ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr=ptr->link;
	}
	printf("\n");
}

int main()
{
	struct node *top=NULL;
	int choice,item;
	while (1)
	{
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display item at top\n");
		printf("4. Display all items of stack\n");
		printf("5. Quit\n");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
				printf("Enter the item to be pushed : ");
				scanf("%d",&item);
				push(&top,item);
				break;
			case 2:
				item=pop(&top);
				printf("Popped item is : %d\n", item);
				break;
			case 3:
				printf("Item at the top is : %d\n", peek(top));
				break;
			case 4:
				display(top);
				break;
            case 5:
                exit(1);
			default:
				printf("Please enter a choice from 1 to 4\n");
		}
	}
	return 0;
}
