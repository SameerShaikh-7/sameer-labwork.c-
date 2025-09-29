#include <iostream>
#include "Student.cpp"
using namespace std;

int main()
{
    StudentSystem<int, string> studentSystem;
    int menuChoice;
    int studentID;
    string studentName;

    do
    {
        // Menu 
        cout << endl << "===== Student Management System =====" << endl;
        cout << "1. Add New Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Find Student" << endl; 
        cout << "4. Remove Student" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> menuChoice;
        cin.ignore(); 

        switch (menuChoice)
        {
        case 1:
    
            cout << "Enter Student ID: ";
            cin >> studentID;
            cin.ignore(); 
            cout << "Enter Student Name: ";
            getline(cin, studentName);
            studentSystem.addStudent(studentID, studentName);  
            break;

        case 2:

            studentSystem.displayStudents();
            break;

        case 3:
            
            cout << "Enter Student ID to search: ";
            cin >> studentID;
            studentSystem.searchStudent(studentID);
            break;

        case 4:
          
            cout << "Enter Student ID to remove: ";
            cin >> studentID;
            studentSystem.removeStudent(studentID);
            break;

        case 0:
            
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (menuChoice != 0);

    return 0;
}
