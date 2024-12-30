#include"header.c"
void stud_show(ST *ptr)
{
	if(ptr==0)
	{
		printf("Records are empty..\n");
		return;
	}
	printf("---------------------------------------------\n");
	printf("| Roll No | Name                  | Percent |\n");
    	printf("---------------------------------------------\n");
	while(ptr != 0)
	{
		printf("|  %-6d |  %-20s |  %-6.2f |\n", ptr->rollno,ptr->name,ptr->percent);
		ptr = ptr->next;
	}
    	printf("---------------------------------------------\n");
}

// A AAA 10 A BBB 20 A CCC 30 A DDD 40 AAA 60 A BBB 70 A CCC 60 A DDD 70 

