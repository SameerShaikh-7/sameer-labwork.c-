#include <iostream>
#include <string.h>
using namespace std;

class Train {
private:
    int train_no;
    char train_name[30];
    char source[20];
    char destination[20];
    char train_time[20];

public:

    void setData() {
        cout << "Enter Train Number: ";
        cin >> train_no;

        fflush(stdin);
        cout << "Enter Train Name: ";
        gets(train_name);

        fflush(stdin);
        cout << "Enter Source: ";
        gets(source);

        fflush(stdin);
        cout << "Enter Destination: ";
        gets(destination);

        fflush(stdin);
        cout << "Enter Train Time: ";
        gets(train_time);
    }

    
    void getData() {
        cout << endl << "--- Train Information ---" << endl;
        cout << "Train Number     : " << train_no << endl;
        cout << "Train Name       : " << train_name << endl;
        cout << "Source           : " << source << endl;
        cout << "Destination      : " << destination << endl;
        cout << "Train Time       : " << train_time << endl;
    }

  
    int getTrainNo() 
    {
        return train_no;
    }
};

int main() 
{
    int n;
    cout << "Enter number of Trains : ";
    cin >> n;

    if (n < 3) {
        cout << "Please enter at least 3 trains" << endl;
        return 0;
    }

    Train trains[50];

    // Input Train
    for (int i = 0; i < n; i++) {
        cout << endl << "Enter details for Train " << i + 1 << ":" << endl;
        trains[i].setData();
    }

    int choice;
    do {
        cout << endl << "===== Railway Reservation System =====" << endl;
        cout << "1. Display All Train Records" << endl;
        cout << "2. Search Train by Number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
        case 1:
            cout << endl << "----All Train Records----" << endl;
            for (int i = 0; i < n; i++) {
                trains[i].getData();
            }
            break;

        case 2: {
            int searchNo;
            cout << "Enter Train Number to Search: ";
            cin >> searchNo;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (trains[i].getTrainNo() == searchNo) {
                    trains[i].getData();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Train not found!" << endl;
            }
            break;
        }

        case 3:
            cout << "Exiting... Thank you!" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again" << endl;
        }
    } while (choice != 3);

   
}
