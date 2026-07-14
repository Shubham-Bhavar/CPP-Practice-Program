/*Write a C++ program to perform following operations on a number using switch case
Operations:
1. Check if the number is even or odd
2. Check if the number is positive or negative
3. Check both even/odd and positive/negative conditions
*/
#include<iostream>
using namespace std;

int main()
{
    int num,choice;

    cout<<"enter the number"<<endl;
    
    cin>>num;
    
    cout<<"Press 1 for checking even or odd"<<endl;
    
    cout<<"Press 2 for checking positive or negative"<<endl;

    cout<<"Press 3 for checking both even/odd and positive/negative conditions"<<endl;
    
    cin>>choice;

    switch(choice)
    {
        case 1:
        if(num%2==0)
        {
            cout<<"The number is even"<<endl;
        }
        else
        {
            cout<<"The number is odd"<<endl;
        }
        break;
        case 2:
        if(num>0)
        {
            cout<<"The number is positive"<<endl;
        }
        else if(num<0)
        {
            cout<<"The number is negative"<<endl;
        }
        else
        {
            cout<<"The number is zero"<<endl;
        }
        break;

        case 3:

        if(num%2==0)
        {
            cout<<"The number is even"<<endl;
        }
        else
        {
            cout<<"The number is odd"<<endl;
        }
        if(num>0)
        {
            cout<<"The number is positive"<<endl;
        }
        else if(num<0)
        {
            cout<<"The number is negative"<<endl;
        }
        else
        {
            cout<<"The number is zero"<<endl;
        }
        break;
        
        default:
        cout<<"Your choice is invalid"<<endl;
        cout<<"Please enter a valid choice"<<endl;
    }
    return 0;

}