#include <iostream>
using namespace std;

class X 
{
public :
    int a , b , c;
};


class Y : public X 
{
 public:
    void setData(){
         
        cout << "Enter your First Number : ";
        cin >> this->a;

       cout << "Enter your second Number : ";
        cin >> this->b;

        cout << "Enter your third Number : ";
        cin >> this->c;
    };

    void getData(){
        int sum=(a * a * a)+(b * b * b)+(c * c * c);
        cout<<"sum of cubes of all numbers = "<<sum;
    };
};






