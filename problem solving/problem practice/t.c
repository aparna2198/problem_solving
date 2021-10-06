#include<stdio.h>

struct aish{
	
	int eno;
	char name[20];
double esal;
};
void main()
{
	struct aish * ptr;
	ptr = (struct aish*)malloc(sizeof(struct aish));
	if(ptr==NULL)
	{
		
	}
	else
	{
		scanf("%d",& ptr->eno);
		scanf("%s",&ptr->name);
		scanf("%f",&ptr->esal);
		printf(" %d %s %lf", ptr->eno, ptr->name,ptr->esal);
	}
}
