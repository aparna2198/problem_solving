#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
void append(void);
int length(void);
void display(void);
void atbegin(void);
void atafter(void);
void delte(void);
int len;
int main()
{
	int ch;
	while(1)
	{
		printf("1. Append\n");
		printf("2. length\n");
		printf("3. Display\n");
		printf("4. Atbegin\n");
		printf("5. Atafter\n");
		printf("6. Delete\n");
		printf("7. Quit\n");
		printf("Enter choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: append();
					break;
			case 2: len=length();
					printf("%d is the length\n",len);
					break;
			case 3: display();
					break;
			case 4: atbegin();
					break;
			case 5: atafter();
					break;
			case 6: delte();
					break;
			case 7: exit(1);
			
			default: printf("Invalid Input\n");
		}
	}
return 0;
}
void append()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node* p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
		
	}
}
int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	while(temp->link!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}
void display()
{
	struct node* temp;
	temp=root;
	if(temp==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->link;
		}
		printf("\n\n");
	}
	
}
void atbegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		temp->link=root;
		root=temp;
	}
}
void atafter()
{
	int loc,i,len;
	struct node* temp, *p;
	printf("Enter loc:");
	scanf("%d",&loc);
	len=length();
	if(loc>len)
	{
		printf("INvalid location\n");
	}
	else
	{
		p=root;
		while(i<loc)
		{
			p=p->link;
			i++;
		}
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d-->",&temp->data);
	temp->link=NULL;
	temp->link=p->link;
	p->link=temp;
	}
	
}
void delte()
{
	int loc;
	struct node* temp, *p;
	printf("Enter Loc:");
	scanf("%d",&loc);
	temp=root;
	if(loc>length())
	{
		printf("Invalid Location\n");
	}
	else if(loc==1)
	{
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
	{
		struct node* p=root, *q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}


