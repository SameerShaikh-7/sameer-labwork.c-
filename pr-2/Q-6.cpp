#include <iostream>
using namespace std;

int main() 

{
    char start, end;

    cout <<"Enter start character: ";
    cin >> start;
    cout <<"Enter end character: ";
    cin >> end;

    cout << "Characters from " << start << " to " << end << ": ";

    char ch = start;
    while (ch <= end) 
    
    {
        cout << ch << " ";
        ch++;
    }

    cout << endl;
    
}
