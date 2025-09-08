#include <iostream>
using namespace std;


class X {

protected:
    int a, b, c;
};


class Y : public X {
public:
    
    void setData() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
        cout << "Enter third number: ";
        cin >> c;
    }

    
    void getData() {
        int sum = (a*a*a) + (b*b*b) + (c*c*c);
        cout << endl <<"Sum of cubes of " << a << " and " << b << " and " << c << " = " << sum << endl;
    }
};


