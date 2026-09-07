#include<stdio.h>
#include"header.h"
void sort_record_by_percentage(SLL **ptr)
{
SLL *i,*j;
float t;
for(i=*ptr;i!=0;i=i->next)
{
for(j=i->next;j!=0;j=j->next)
{
if(i->percentage < j->percentage)
{
t=i->percentage;
i->percentage=j->percentage;
j->percentage=t;
}
}
}
printf("sorted successfully...\n");
}

void sort_record_by_name(SLL **ptr)
{
SLL *i,*j;
char t[50];
for(i=*ptr;i!=0;i=i->next)
{
for(j=i->next;j!=0;j=j->next)
{
if(strcmp(i->name,j->name)>0)
{
strcpy(t,i->name);
strcpy(i->name,j->name);
strcpy(j->name,t);
}
}
}
printf("sorted successfully...\n");
}

