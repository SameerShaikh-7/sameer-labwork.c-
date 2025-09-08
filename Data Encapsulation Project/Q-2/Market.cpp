#include <iostream>
#include <string.h>
using namespace std;

class Market {
private:
    int item_no;
    char item_name[30];
    int quantity;
    int price;
    int discount;

public:
    void setData() {
        cout << "Enter Item Number: ";
        cin >> item_no;

        fflush(stdin);
        cout << "Enter Item Name : ";
        gets(item_name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Discount : ";
        cin >> discount;
    }

    void getData() {
        cout << endl << "--- Item Information ---" << endl;
        cout << "Item Number  : " << item_no << endl;
        cout << "Item Name    : " << item_name << endl;
        cout << "Quantity     : " << quantity << endl;
        cout << "Price        : " << price << endl;
        cout << "Discount     : " << discount << "%" << endl;
    }

    int getItemNo() {
        return item_no;
    }
};




int main() {
    char user_id[20];
    char password[20];
    cout << "Enter User ID: ";
    cin >> user_id;
    cout << "Enter Password: ";
    cin >> password;

  
    int n;
    cout << "Enter number of items : ";
    cin >> n;

    if (n < 3) {
        cout << "Please enter at least 3 items!" << endl;
        return 0;
    }

    Market items[50];

    for (int i = 0; i < n; i++) {
        cout << endl << "Enter details for Item " << i + 1 << ":" << endl;
        items[i].setData();
    }

    int choice;
    do {
        cout << endl << "====== Supermarket Billing System ======" << endl;
        cout << "1. Display All Items" << endl;
        cout << "2. Search Item by Number" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << endl << "==== All Item Records ====" << endl;
            for (int i = 0; i < n; i++) {
                items[i].getData();
            }
            break;

        case 2: {
            int searchNo;
            cout << "Enter Item Number to Search: ";
            cin >> searchNo;
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (items[i].getItemNo() == searchNo) {
                    items[i].getData();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Item not found!" << endl;
            }
            break;
        }

        case 3:
            cout << "Exiting... Thank you!" << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

        
    } while (choice != 3);

}
