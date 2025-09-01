#include <iostream>
using namespace std;

int main() {
    char name[50];
    char *p;
    int length = 0;

    cout << "Enter your name: ";
    cin.getline(name, 50);

    p = name;  

    for (; *p != '\0'; p++) 
    {
        length++;
    }
       
    
    cout << "Total characters = " << length << endl;

}
