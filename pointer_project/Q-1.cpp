#include <iostream>
using namespace std;

int main()
{
    char name[50];
    char *p;
    int length = 0;

    cout << "Enter any string : ";
    cin.getline(name, 50);

    p = name;

    for (p = name; *p; p++)
    {
        length = p - name;
    }

    cout << "Total characters = " << length << endl;
}
