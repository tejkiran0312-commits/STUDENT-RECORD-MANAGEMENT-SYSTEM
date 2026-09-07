#include<stdio.h>
#include"header.h"
void add_a_new_student_record(SLL **ptr)
{
        SLL *new,*last,*temp;
        new=malloc(sizeof(SLL));
        printf("enter the records:\n");
        scanf("%d%s%f",&new->rollno,new->name,&new->percentage);
        new->next=0;
        if(new->percentage>=0.00&&new->percentage<=100.00)
        {
                if(new->rollno>=0)
                {
                        if(new->name[0]!='\0')
                        {
                                temp=*ptr;
                                while(temp!=0)
                                {
                                if(temp->rollno==new->rollno)
                                {
                                        printf("rollno is not unique...\n");
                                        return;
                                }
                                temp=temp->next;
                                }
                                if(*ptr==0)
                                        *ptr=new;
                                else
                                {
                                        last=*ptr;
                                        while(last->next)
                                                last=last->next;
                                        last->next=new;
                                }
                        }
                        else
                                printf("name is empty...\n");
                }
                else
                        printf("invalid rollno...\n");
        }
        else
		printf("invalid range...\n");
}
