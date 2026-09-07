#include<stdio.h>
#include"header.h"
void delete_all_records(SLL **ptr)
{
if(*ptr==0)
{
printf("no record found...\n");
return;
}
SLL *del=*ptr;
int c=1;
while(del)
{
*ptr=del->next;
printf("node:%d deleted\n",c++);
sleep(1);
free(del);
del=*ptr;
}
}


void delete_a_student_record_by_rollno(SLL **ptr)
{
        SLL *del,*prev=0;
        int num;
        printf("enter the rollno:\n");
                scanf("%d",&num);
        del=*ptr;
        while(del)
        {
                if(del->rollno==num)
                {
                        if(del->next==0)
                        {
                                *ptr=0;
                                free(del);
                                return;
                        }
                        else
                        {
                                prev->next=del->next;
                                free(del);
                                return;
                        }
                }
                        prev=del;
                        del=del->next;

        }

        printf("deleted node...\n");
}


void delete_a_student_record_by_name(SLL **ptr)
{
        SLL *del,*prev=0;
        char s[20];
        printf("enter the name:\n");
                scanf("%s",s);
        del=*ptr;
        while(del)
        {
                if(strcmp(del->name,s)==0)
                {
                        if(del->next==0)
                        {
                                *ptr=0;
                                free(del);
                                return;
                        }
                        else
                        {
                                prev->next=del->next;
                                free(del);
                                return;
                        }
                }
                        prev=del;
                        del=del->next;

        }

        printf("deleted node...\n");
}
