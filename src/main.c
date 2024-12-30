#include"header.c"
int main()
{
	ST *hptr=0;
	char op;
	while(1)
	{
		printf(" _____________________________\n");
		printf("|  ***STUDENT RECORD MENU***  |\n");
		printf("| ___________________________ |\n");
		printf("| a/A : add new record...     |\n");
		printf("| d/D : delete a record...    |\n");
		printf("| s/S : show the list...      |\n");
		printf("| m/M : modify a record..     |\n");
		printf("| v/V : save...               |\n");
		printf("| e/E : exit...               |\n");
		printf("| t/T : sort the list...      |\n");
		printf("| l/L : delete all records..  |\n");
		printf("| r/R : reverse the list...   |\n");
		printf("|_____________________________|\n");
	

		printf("Enter your choice: ");
		scanf(" %c",&op);

		if((op>='a')&&(op<='z'))
			op=op^=32;

		switch(op)
		{
			case 'A': stud_add(&hptr);
				  break;
			case 'D': stud_del(&hptr);
				  break;
			case 'S': stud_show(hptr);
				  break;
			case 'M': stud_mod(hptr);
				  break;
			case 'V': stud_save(hptr);
				  break;
			case 'E': {
					  if(stud_exit(&hptr)==0)
						  return 0;
					  else
						  printf("Exit cancelled\n");
					  break;
				  }
			case 'T': stud_sort(&hptr);
				  break;
			case 'L': stud_delall(&hptr);
				  break;
			case 'R': stud_rev(hptr);
				  break;
			default: printf("Invalid choice\n");
				 return 0;
		}
	}
}

