#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct stu
{
int rollno;
char name[20];
float percentage;
struct stu *next;
}SLL;
void main_menu(void);
void sub_menu1(void);
void sub_menu2(void);
void sub_menu3(void);
void sub_menu4(void);
void add_a_new_student_record(SLL **);
void delete_a_student_record_by_rollno(SLL **);
void delete_a_student_record_by_name(SLL **);
void display_the_complete_student(SLL *);
void save_file(SLL *);
void read_file(SLL **);
void delete_all_records(SLL **);
void reverse_the_list(SLL *);
void sort_record_by_percentage(SLL **);
void sort_record_by_name(SLL **);
void modify_record_by_rollno(SLL **);
void modify_record_by_name(SLL **);
void modify_record_by_percentage(SLL **);
