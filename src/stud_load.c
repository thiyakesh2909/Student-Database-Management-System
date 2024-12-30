#include "header.c"

void stud_load(ST **ptr)
{
	int roll;
	char s[30];
	float percent;
	FILE *fp = fopen("student.dat","r");

	if(fp == NULL)
	{
		printf("File doesn't exist...\n");
		return 0;
	}

	fscanf(fp,"%d %s %f",&roll,s,&percent);

}
