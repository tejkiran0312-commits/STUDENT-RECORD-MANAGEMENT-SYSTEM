#include<stdio.h>
#include"header.h"
void display_the_complete_student(SLL *ptr)
{
if(ptr==0)
{
printf("\033[31m\n");
printf("no record found...\n");
printf("\033[0m\n");
return;
}
printf("\033[32m-----------------------------\n");
printf("rollno name percentage\n");
printf("-----------------------------\033[0m\n");
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("\033[32m-----------------------------\033[0m\n");
}
