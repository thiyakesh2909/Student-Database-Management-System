#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int rollno;
	char name[100];
	float percent;
	struct student * next;
}ST;

void stud_add(ST **);
void stud_show(ST *);
void stud_save(ST *);
void stud_mod(ST *);
void stud_rev(ST *);
void stud_sort(ST **);
int count(ST *);
void stud_del(ST **);
void stud_delall(ST **);
int stud_exit(ST **);

