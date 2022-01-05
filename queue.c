#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear=NULL;

insert()
{
	struct node *tmp;
	tmp=malloc(sizeof(struct node));
	printf("Input the element for adding in queue: ");
	scanf("%d",&tmp->data);
	tmp->next=NULL;
	if(front==NULL)
	{
		front=tmp;
	}
	else
	{
		rear->next=tmp;
	}
	rear=tmp;
}

delete()
{
	struct node *tmp;
	if(front==NULL)
	{
		printf("Queue Underflow");
	}
	else
	{
		tmp=front;
		printf("Deleted element: %d",tmp->data);
		front=front->next;
		free(tmp);
	}
}

display()
{
	struct node *q;
	q=malloc(sizeof(struct node));
	q=front;
	if(front==NULL)
	{
		printf("Queue is empty\n");
	}
	else 
	{
		printf("Queue elements: \n");
		while(q!=NULL)
		{
			printf("%d ",q->data);
			q=q->next;
		}
		printf("\n");
	}
}

main()
{
	int choice;
	while(1)
	{
		printf("\n");
		printf("\tMENU\n");
		printf("1.  Insert\n");
		printf("2.  Delete\n");
		printf("3.  Display\n");
		printf("4. Quit\n");
		printf("Your choice: ");
		scanf("%d",&choice);
		printf("\n");
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Invalid choice");
			}
		}
}
