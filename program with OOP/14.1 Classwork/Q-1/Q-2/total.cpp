#include <iostream>
using namespace std;


class P {
protected:
    float temperature;
};


class Q : public P {
protected:
    float fahrenheit;
public:
    void toFahrenheit() {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        fahrenheit = (temperature * 9/5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << endl;
    }
};


class R : public Q {
public:
    void toKelvin() {
        float kelvin = ((fahrenheit - 32) * 5/9) + 273.15;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
};


