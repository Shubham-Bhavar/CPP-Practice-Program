/*
Program: Matrix Addition (3x3)
Description:
    - Accepts two 3x3 matrices from the user.
    - Displays both matrices.
    - Finds and displays the addition of the two matrices.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaration of three 3x3 matrices
    int a[3][3], b[3][3], c[3][3];

    int i, j;

    // Input first matrix
    cout << "Enter elements of First Matrix:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of Second Matrix:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }

    // Display first matrix
    cout << "\nFirst Matrix:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // Display second matrix
    cout << "\nSecond Matrix:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    // Calculate addition of both matrices
    cout << "\nAddition of the Two Matrices:\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
