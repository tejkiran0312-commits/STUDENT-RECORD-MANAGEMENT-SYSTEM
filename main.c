#include<stdio.h>
#include"header.h"
int main()
{
char op,choice;
SLL *headptr=0;
int f=0;
while(1)
{
main_menu();
printf("enter the choice:\n");
scanf(" %c",&op);
switch(op)
{
	
	case 'a':
	case 'A':add_a_new_student_record(&headptr);break;
	case 's':
	case 'S':display_the_complete_student(headptr);break;
	case 'v':
	case 'V':save_file(headptr);break;
	case 'k':
	case 'K':read_file(&headptr);break;
	case 'r':
	case 'R':reverse_the_list(headptr);break;
	case 'l':
	case 'L':delete_all_records(&headptr);break;
	case 'd':
	case 'D':
	while(1)
        {
        if(f==3)
        break;
        sub_menu3();
        scanf(" %c",&choice);
        switch(choice)
        {	 
		case 'r':
		case 'R':delete_a_student_record_by_rollno(&headptr);break;
		case 'n':
		case 'N':delete_a_student_record_by_name(&headptr);break;
		case 'b':
		case 'B':printf("back...\n");
			 f=3;
			 break;
	}
	}
	break;
	case 't':
	case 'T':
	while(1)
	{
	if(f==1)
	break;
	sub_menu1();
	scanf(" %c",&choice);
	switch(choice)
	{
	case 'p':
	case 'P':sort_record_by_percentage(&headptr);
		 
		 break;
	case 'n':
	case 'N':sort_record_by_name(&headptr);
		 
		 break;
	case 'b':
	case 'B':printf("back\n");
		 f=1;
			 break;
	}
	}
	break;
	case 'm':
	case 'M':
	while(1)
        {
        if(f==2)
        break;
        sub_menu2();
        scanf(" %c",&choice);
        switch(choice)
        {
		case 'r':
		case 'R':modify_record_by_rollno(&headptr);
			 
			 break;
		case 'n':
		case'N':modify_record_by_name(&headptr);
			
			 break;
		case 'p':
		case 'P':modify_record_by_percentage(&headptr);
			 
			 break;
		case 'b':
		case 'B':printf("back\n");
			 f=2;
			 break;
	}
	}
	break;
	case 'e':
	case 'E':
	sub_menu4();
        scanf(" %c",&choice);
        switch(choice)
        {
		case 's':
		case 'S':save_file(headptr);
			 exit(0);
		case 'e':
		case 'E':
	                  exit(0);
	}
}
}
}

