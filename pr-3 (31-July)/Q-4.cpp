#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i>1; i--)
    {
        for( int s=5; s>1; s--)
        {
            cout <<" "; 
        }
        for(int j=1; j<=i; j++)
        {
            cout << j %2;
        }
        cout << endl;
    }   
}

