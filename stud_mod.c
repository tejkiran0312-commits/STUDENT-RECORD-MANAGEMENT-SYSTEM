#include<stdio.h>
#include"header.h"
void modify_record_by_rollno(SLL **ptr)
{
        int num,k;
        SLL *new=*ptr;
        printf("enter the rollno:\n");
        scanf("%d",&num);
        while(new)
        {
                if(new->rollno==num)
                {
                        printf("enter the new rollno:\n");
                        scanf("%d",&k);
                        new->rollno=k;
                        return;
                }
                new=new->next;
        }
        printf("rollno is not present...\n");
}

void modify_record_by_name(SLL **ptr)
{
        char s[20],k[20];
        SLL *new=*ptr;
        printf("enter the name:\n");
        scanf("%s",s);
        while(new)
        {
                if(strcmp(new->name,s)==0)
                {
                        printf("enter the new name:\n");
                        scanf("%s",k);
                        strcpy(new->name,k);
                        return;
                }
                new=new->next;
        }
        printf("name is not present...\n");
}

void modify_record_by_percentage(SLL **ptr)
{
        float num,k;
        SLL *new=*ptr;
        printf("enter the percentage:\n");
        scanf("%f",&num);
        while(new)
        {
                if(new->percentage==num)
                {
                        printf("enter the new percentage:\n");
                        scanf("%f",&k);
                        new->percentage=k;
                        return;
                }
                new=new->next;
        }
        printf("rollno is not present...\n");
}
