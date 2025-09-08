#include <iostream>
#include <string.h>
using namespace std;

class Hotel{

    public:
        int hotel_id;
        char hotel_name[20];
        char hotel_type[20];
        int hotel_rating;
        char hotel_location [20];
        int hotel_establish_year;
        int hotel_staff_quantity;
        int hotel_room_quantity;  
        
        
void setHotel()
{
    cout << endl << "-----Hotel Details-----" << endl;

    cout << endl << "Enter your Hotel id :  ";
    cin >> hotel_id;

    fflush(stdin);
    cout << endl << "Enter your Hotel Name :  ";
    gets(hotel_name);

    fflush(stdin);
    cout << endl << "Enter your Hotel Type :  ";
    gets(hotel_type);

    cout <<endl <<  "Enter Hotel Rating : ";
   
    cin >> hotel_rating;

    fflush(stdin);
    cout << endl << "Enter Hotel Location : ";
    gets(hotel_location);

    cout << endl << "Enter Hotel Establised Year : ";
    cin >> hotel_establish_year;

    cout << endl << "Enter Staff Quantity : ";
    cin >> hotel_staff_quantity;

    cout << endl << "Enter Room Quantity : ";
    cin >> hotel_room_quantity;
}

void getHotel()
{
    cout <<endl << endl <<"-----Customer Details-----" << endl <<endl ;
    cout <<"Id\t\t : " <<  hotel_id << endl ;
    cout <<"Hotel Name\t : " <<  hotel_name << endl ;
    cout <<"Hotel Type\t : " <<  hotel_type << endl ;
    cout <<"Hotel Rating\t : " <<  hotel_rating << endl ;
    cout <<"Hotel Location\t : " <<  hotel_location << endl ;
    cout <<"Establish year\t : " <<  hotel_establish_year << endl ;
    cout <<"Staff Quantity\t : " <<  hotel_staff_quantity << endl ;
    cout <<"Room Quantity\t : " <<  hotel_room_quantity << endl ;
}


};





