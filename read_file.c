#include<stdio.h>
#include"header.h"
void read_file(SLL **ptr)
{
SLL *new,*last;
FILE *fp=fopen("std.txt","r");
if(fp==0)
{
printf("no record found...\n");
return;
}
while(1)
{
new=malloc(sizeof(SLL));
if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage)==-1)
break;
new->next=0;
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
printf("read the data in file successfully...\n");
}
