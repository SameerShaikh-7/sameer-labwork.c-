#include <iostream>
#include <string.h>
using namespace std;

class Cafe {
private:
    int cafe_id;
    char cafe_name[20];
    char cafe_type[20];       
    int cafe_rating;          
    char cafe_location[20];   
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    
    Cafe() {

    // Default Constructor 
        cafe_id = 0;
        cafe_rating = 0;
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    void setData() {
        cout << endl << "Enter Cafe ID: ";
        cin >> cafe_id;

        fflush(stdin);
        cout << endl << "Enter Cafe Name : ";
        gets(cafe_name);

        fflush(stdin);
        cout << endl << "Enter Cafe Type : ";
        gets(cafe_type);

        cout << endl << "Enter Cafe Rating 1 to 5 : ";
        cin >> cafe_rating;

        fflush(stdin);
        cout << endl << "Enter Cafe Location: ";
        gets(cafe_location);

        cout << endl << "Enter Cafe Establish Year: ";
        cin >> cafe_establish_year;

        cout << endl << "Enter Cafe Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

   
    void getData() {
        cout << endl << "------ Cafe Information ------" << endl;
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << " Star" << endl;
        cout << "Cafe Location: " << cafe_location << endl;
        cout << "Cafe Establish Year: " << cafe_establish_year << endl;
        cout << "Cafe Staff Quantity: " << cafe_staff_quantity << endl;
    }
};

int main() 
{
    int n;
    cout << "Enter number of Cafes: ";
    cin >> n;

    Cafe cafes[10];

    // Input
    for (int i = 0; i < n; i++) {
        cout << endl << "Enter details for Cafe " << i + 1 << ":" << endl;
        cafes[i].setData();
    }

    // Output
    cout << endl <<"===== Cafes Information ====="<< endl ;
    for (int i = 0; i < n; i++) {
        cafes[i].getData();
    }


};