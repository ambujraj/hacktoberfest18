#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *link;
};
typedef struct node NODE;

void display(NODE *start)
{
	NODE *p;
	if (start==NULL)
	{
		printf("List is empty!\n");
		return;
	}
	p=start;
	printf("The list is\n");
	while (p!=NULL)
	{
		printf("%d ",p->info);
		p=p->link;
	}
	printf("\n\n");
}

void search(NODE *start, int item)
{
	NODE *p=start;
	int pos=1;
	while (p!=NULL)
	{
		if (p->info==item)
		{
			printf("Item %d found at pos %d !\n",item,pos);
			return;
		}
		p=p->link;
		pos++;
	}
	printf("Item %d not dound in the list!\n",item);
}

NODE *addatbeg(NODE *start, int data)
{
	NODE *tmp;
	tmp=(NODE *)malloc(sizeof(NODE));
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}

NODE *addatend(NODE *start, int data)
{
	NODE *tmp;
	tmp=(NODE *)malloc(sizeof(NODE));
	tmp->info=data;
	NODE *p;
	p=start;
	while (p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}

NODE *addafter(NODE *start, int data, int item)
{
	NODE *tmp,*p;
	p=start;
	while (p!=NULL)
	{
		if (p->info==item)
		{
			tmp=(NODE *) malloc(sizeof(NODE));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("%d not found in the list!\n",item);
	return start;
}

NODE *addbefore(NODE *start, int data, int item)
{
	NODE *tmp,*p;
	if (start==NULL)
	{
		printf("List is empty!\n");
		return start;
	}
	if (start->info==item)
	{
		tmp=(NODE *)malloc(sizeof(NODE));
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	while (p->link!=NULL)
	{
		if (p->link->info==item)
		{
			tmp=(NODE *)malloc(sizeof(NODE));
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
	printf("Item %d not found in the list!\n",item);
	return start;
}

NODE *addatpos(NODE *start, int data, int pos)
{
	NODE *tmp,*p;
	int i;
	tmp=(NODE *)malloc(sizeof(NODE));
	tmp->info=data;
	if (pos==1)
	{
		tmp->link=start;
		start=tmp;
		return start;
	}
	p=start;
	for (i=1;i<pos-1 && p!=NULL;i++)
		p=p->link;
	if (p==NULL)
		printf("There are less than %d elements in the list!\n",pos);
	else
	{
		tmp->link=p->link;
		p->link=tmp;
	}
	return start;
}

NODE *create_list(NODE *start)
{
	int i,n,data;
	printf("Enter the number of nodes!\n");
	scanf("%d",&n);
	start=NULL;
	if (n==0)
		return start;
	printf("Enter the element to be inserted!\n");
	scanf("%d",&data);
	start=addatbeg(start,data);
	for (i=2;i<=n;i++)
	{
		printf("Enter the element to be inserted!\n");
		scanf("%d",&data);
		start=addatend(start,data);
	}
	return start;
}

NODE *del(NODE *start, int data)
{
	NODE *tmp,*p;
	tmp=(NODE *)malloc(sizeof(NODE));
	if (start==NULL)
	{
		printf("List is empty!\n");
		return start;
	}
	if (start->info==data)
	{
		tmp=start;
		start=start->link;
		free(tmp);
		return start;
	}
	p=start;
	while (p->link!=NULL)
	{
		if (p->link->info==data)
		{
			tmp=p->link;
			p->link=tmp->link;
			free(tmp);
			return start;
		}
		p=p->link;
	}
	printf("Element %d not found!\n", data);
	return start;
}

NODE *reverse(NODE *start)
{
	NODE *prev,*next,*p;
	prev=NULL;
	p=start;
	while (p!=NULL)
	{
		next=p->link;
		p->link=prev;
		prev=p;
		p=next;
	}
	start=prev;
	return start;
}

void count(NODE *start)
{
    NODE *p;
    p=start;
    int res=0;
    while (p!=NULL)
    {
        res++;
        p=p->link;
    }
    printf("Number of elements in list= %d\n\n",res);
}

int main()
{
	NODE *start=NULL;
	int choice,data,item,pos;
	while (1)
	{
		printf("1. Create a linked list\n");
		printf("2. Display\n");
		printf("3. Count\n");
		printf("4. Search\n");
		printf("5. Add at beginning\n");
		printf("6. Add at end\n");
		printf("7. Add after\n");
		printf("8. Add before\n");
		printf("9. Add at position\n");
		printf("10. Delete\n");
		printf("11. Reverse\n");
		printf("12. Quit\n");
		scanf("%d",&choice);

		switch (choice)
		{
			case 1: start=create_list(start);break;
			case 2: display(start);break;
			case 3: count(start);break;
			case 4:
				printf("Enter the element to be searched!!\n");
				scanf("%d",&data);
				search(start,data);break;
			case 5:
				printf("Enter the element to be inserted!\n");
				scanf("%d",&data);
				start=addatbeg(start,data);break;
			case 6:
				printf("Enter the element to be inserted\n");
				scanf("%d",&data);
				start=addatend(start,data);break;
			case 7:
				printf("Enter the element to be inserted!\n");
				scanf("%d",&data);
				printf("Enter the element after which to insert!\n");
				scanf("%d",&item);
				start=addafter(start,data,item);break;
			case 8:
				printf("Enter the element to be inserted!\n");
				scanf("%d",&data);
				printf("Enter the element before which to insert!\n");
				scanf("%d",&item);
				start=addbefore(start,data,item);break;
			case 9:
				printf("Enter the element to be inserted!\n");
				scanf("%d",&data);
				printf("Enter the position at which to insert!\n");
				scanf("%d",&pos);
				start=addatpos(start,data,pos);break;
			case 10:
				printf("Enter the element to be deleted!\n");
				scanf("%d",&data);
				start=del(start,data);break;
			case 11:
				start=reverse(start);break;
			case 12:
				exit(1);
			default:
				printf("Please enter a choice from 1 to 12!\n");
		}
	}
	return 0;
}
