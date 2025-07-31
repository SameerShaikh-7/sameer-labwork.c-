#include <iostream>
using namespace std;

main()
{
    int n=11;
    int row = 4;
    for(int i = 1; i <=row; i++)
    {
        for(int j=1; j <=i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
            
    }
}