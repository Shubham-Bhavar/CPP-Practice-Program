#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "\nLargest number is: " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "\nLargest number is: " << b;
    }
    else
    {
        cout << "\nLargest number is: " << c;
    }   
    return 0;
}