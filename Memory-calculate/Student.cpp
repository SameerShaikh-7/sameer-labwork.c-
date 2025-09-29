#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

template <typename IdType, typename NameType>
class StudentSystem
{
private:
    vector<IdType> allStudentIds;      
    vector<NameType> allStudentNames;   

public:
   //Student ID
    void addStudent(IdType newStudentId, NameType newStudentName)
    {
      
        for (int i = 0; i < allStudentIds.size(); i++)
        {
            if (allStudentIds[i] == newStudentId)
            {
                cout << "This ID is already used!" << endl;
                return;
            }
        }

        
        allStudentIds.push_back(newStudentId);
        allStudentNames.push_back(newStudentName);
        cout << "Student added successfully! " << "( "<< newStudentName <<" )" << endl;
    }

    // Display 
    void displayStudents()
    {
        if (allStudentIds.empty())
        {
            cout << "No student found." << endl;
            return;
        }

        cout << "=== Student List ===" << endl;
        for (int i = 0; i < allStudentIds.size(); i++)
        {
            cout << "ID: " << allStudentIds[i] 
                 << "  Name: " << allStudentNames[i] << endl;
        }
    }

//Search 
    void searchStudent(IdType searchId)
    {
        for (int i = 0; i < allStudentIds.size(); i++)
        {
            if (allStudentIds[i] == searchId)
            {
                cout << "Student Found!" << endl;
                cout << "ID: " << allStudentIds[i] 
                     << "  Name: " << allStudentNames[i] << endl;
                return;
            }
        }
        cout << "No student found with this ID." << endl;
    }

//Remove  
    void removeStudent(IdType removeId)
    {
        for (int i = 0; i < allStudentIds.size(); i++)
        {
            if (allStudentIds[i] == removeId)
            {
                allStudentIds.erase(allStudentIds.begin() + i);
                allStudentNames.erase(allStudentNames.begin() + i);
                cout << "Student removed successfully!" << endl;
                return;
            }
        }
        cout << "No student found :)" << endl;
    }
};
