#include<stdio.h>
#include"header.h"
void sub_menu1()
{
printf("\033[33m\n");
printf("~~~~~~~~~~~~SUB MENU FOR SORT~~~~~~~~~~~~~\n");
printf("N/n : Sort with name\n");
printf("P/p : Sort with percentage\n");
printf("b/B : back\n");
printf("\033[0m\n");
}
void sub_menu2()
{
printf("\033[33m\n");
printf("~~~~~~~~~~~~SUB MENU FOR MODIFICATION~~~~~~~~~~~~\n");
printf("R/r : Search by roll number\n");
printf("N/n : Search by name\n");
printf("P/p : Search by percentage\n");
printf("b/B : back\n");
printf("\033[0m\n");

}

void sub_menu3()
{
printf("\033[33m\n");
printf("~~~~~~~~~~~~~ SUB MENU FOR DELETE~~~~~~~~~~~~~\n");
printf("R/r : delete by roll number\n");
printf("N/n : delete by name\n");
printf("b/B : back...\n");
printf("\033[0m\n");
}

void sub_menu4()
{
printf("\033[33m\n");
printf("~~~~~~~~~~~~~SUB MENU FOR EXIT~~~~~~~~~~~~~~\n");
printf("S/s : Save and exit\n");
printf("E/e : Exit without saving\n");
printf("\033[0m\n");
}
