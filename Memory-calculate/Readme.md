# Student Management System in C++

A simple **Student Management System** implemented in C++ using templates and `std::vector` to store student information dynamically.  
This system allows adding, displaying, searching, and removing students using their ID.

---

## Features

- **Add New Student**: Add a student with unique ID and name.
- **Display All Students**: Show the list of all students with their IDs and names.
- **Find Student**: Search for a student using their ID.
- **Remove Student**: Remove a student from the system using their ID.

---

## Technology Used

- **Language**: C++
- **Concepts**: 
  - Templates (`template <typename IdType, typename NameType>`)
  - Vectors (`std::vector`)
  - Basic I/O (`cin`, `cout`)
  - Loops and conditionals

---

## File Structure
Project/
│
├── Student.cpp # Contains the StudentSystem template class
├── main.cpp # Contains the main menu and program execution
└── README.md # Project documentation


---

## How to Run

1. **Compile the code**:

```bash
g++ main.cpp -o StudentSystem

./StudentSystem

===== Student Management System =====
1. Add New Student
2. Display All Students
3. Find Student
4. Remove Student
0. Exit
Enter your choice: 

Enter 1 to add a new student (ID must be unique).

Enter 2 to display all students.

Enter 3 to search a student by ID.

Enter 4 to remove a student by ID.

Enter 0 to exit the program.

Notes

The system prevents duplicate student IDs.

Supports int IDs and string names but can be extended to other types using templates.


Example Output
===== Student Management System =====
1. Add New Student
2. Display All Students
3. Find Student
4. Remove Student
0. Exit
Enter your choice: 1

Enter Student ID: 101
Enter Student Name: Alice
Student added successfully! ( Alice )

Enter your choice: 2
=== Student List ===
ID: 101  Name: Alice


---



Author 
Developed by [Sameer Shaikh]

I can also make a **more concise, beginner-friendly version** with **step-by-step instructions** for compiling and running if you want.  

Do you want me to do that?


