#include<stdio.h>
#include"header.h"
void reverse_the_list(SLL *ptr)
{
if(ptr)
{
        if(ptr->next!=0)
        reverse_the_list(ptr->next);
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
}
else
printf("no record found...\n");
}
