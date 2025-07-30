#include <iostream>
using namespace std;

int main() {
    int num, count= 0;

    cout << "Enter any number: ";
    cin >> num;

    if (num == 0) 
    {
        count = 1;
    } 
    
    else 


    {

        
        if (num < 0)
            num = -num;

        while (num != 0) 
        
        {
            num = num / 10;  
            count++;
        }
    }

    cout << "Total number of digits: " << count << endl;

   
}
