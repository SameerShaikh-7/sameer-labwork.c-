#include <iostream>
#include <string.h>
using namespace std;

class Company {
private:
    int comp_id;
    char comp_name[20];
    int comp_staff_quantity;
    int comp_revenue;       
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[20];

public:

    void setData() {
        cout << endl << endl << "Enter Company ID: ";
        cin >> comp_id;

        fflush(stdin);
        cout << endl << "Enter Company Name : ";
        gets(comp_name);

        cout << endl << "Enter Staff Quantity: ";
        cin >> comp_staff_quantity;

        cout << endl <<  "Enter Revenue per year: ";
        cin >> comp_revenue;

        cout << endl << "Enter Raw Diamonds Imported per year: ";
        cin >> comp_import_raw_diamonds;

        cout << endl << "Enter Diamonds Exported per year: ";
        cin >> comp_export_diamonds;

        fflush(stdin);
        cout << endl <<  "Enter CEO Name : ";
        gets(comp_ceo);
    }

 
    void getData() {
        cout << endl << "------ Company Information ------" << endl;
        cout << "Company ID: " << comp_id << endl;
        cout << "Company Name: " << comp_name << endl;
        cout << "Staff Quantity: " << comp_staff_quantity << endl;
        cout << "Revenue per year: " << comp_revenue << endl;
        cout << "Raw Diamonds Imported: " << comp_import_raw_diamonds << endl;
        cout << "Diamonds Exported: " << comp_export_diamonds << endl;
        cout << "CEO Name: " << comp_ceo << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of Diamond Companies: ";
    cin >> n;

    // Array
    Company companies[10];

    // Input
    for (int i = 0; i < n; i++) {
        cout << endl <<"Enter details for Company " << i + 1 << ":" << endl;
        companies[i].setData();
    }

    // Output
    cout << endl << "======= Diamond Companies Information =======" << endl;
    for (int i = 0; i < n; i++) {
        companies[i].getData();
    }

    
}
