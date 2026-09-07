#include<stdio.h>
#include"header.h"
void save_file(SLL *ptr)
{
FILE *fp=fopen("std.txt","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("data saved successfully\n");
fclose(fp);
}
