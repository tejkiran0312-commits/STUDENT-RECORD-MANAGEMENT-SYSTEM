
# STUDENT RECORD MANAGEMENT SYSTEM

## 📌 Project Description

The **Student Record Management System** is a menu-driven C program used to manage student records efficiently using a **Singly Linked List (SLL)**.

The system allows the user to add, delete, modify, display, sort, save, reverse, and delete student records.

## ✨ Features

The application provides the following operations:

| Option | Operation     | Description                               |
| ------ | ------------- | ----------------------------------------- |
| `A/a`  | Add Record    | Add a new student record                  |
| `D/d`  | Delete Record | Delete a student record using roll number |
| `S/s`  | Show List     | Display all student records               |
| `M/m`  | Modify Record | Modify an existing student record         |
| `V/v`  | Save Records  | Save student records to a file            |
| `E/e`  | Exit          | Exit the application                      |
| `T/t`  | Sort List     | Sort records by name or percentage        |
| `L/l`  | Delete All    | Delete all student records                |
| `R/r`  | Reverse List  | Reverse the linked list                   |

## 🧑‍🎓 Student Record

Each student record contains:

* **Roll Number**
* **Name**
* **Percentage**
* **Next Pointer**

Example:

```text
Roll No     Name        Percentage
-----------------------------------
101         Rahul       85.50
102         Priya       91.20
103         Arun        78.60
```

## 🔧 Technologies Used

* **Programming Language:** C
* **Data Structure:** Singly Linked List
* **File Handling:** C File I/O
* **Compiler:** GCC
* **Operating System:** Linux / Windows

## 📂 Project Structure

```text
STUDENT-RECORD-MANAGEMENT-SYSTEM/
│
├── main.c
├── header.h
├── add.c
├── delete.c
├── modify.c
├── display.c
├── sort.c
├── file.c
└── README.md
```

> The actual file names may be different depending on your implementation.

## ▶️ How to Compile

Using GCC:

```bash
gcc *.c -o student
```

## ▶️ How to Run

Linux:

```bash
./student
```

Windows:

```bash
student.exe
```

## 🖥️ Menu

```text
-------------------------------
 STUDENT RECORD MANAGEMENT SYSTEM
-------------------------------

A/a : Add new record
D/d : Delete a record
S/s : Show the list
M/m : Modify a record
V/v : Save records
E/e : Exit
T/t : Sort the list
L/l : Delete all the records
R/r : Reverse the list

Enter your choice:
```

## 🔤 Sorting

When the user selects `T/t`, the program provides:

```text
N/n : Sort with name
P/p : Sort with percentage
```

### Name Sorting

Records are arranged alphabetically according to the student's name.

### Percentage Sorting

Records are arranged in **descending order**, with the highest percentage first.

## 💾 File Handling

The system can save student records into a file so that the records can be stored permanently and retrieved later.

## 🎯 Learning Objectives

This project helps in understanding:

* Structures in C
* Pointers
* Dynamic memory allocation
* Singly Linked Lists
* Functions
* String handling
* File handling
* Sorting techniques
* Menu-driven programming
* Memory management

## 👨‍💻 Author

**Student Record Management System**

Developed as a C programming mini project.
