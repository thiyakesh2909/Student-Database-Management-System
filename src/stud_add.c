#include"header.c"
void stud_add(ST **ptr)
{
	ST *temp=(ST *)malloc(sizeof(ST));
	printf("Enter the name and percent of the student\n");
	scanf("%s %f",temp->name,&temp->percent);

	static int roll=1;
	temp->rollno=roll++;
	if(*ptr==0)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		ST *last=*ptr;
		while(last->next!=0)
			last=last->next;
		temp->next=last->next;
		last->next=temp;
	}
}

