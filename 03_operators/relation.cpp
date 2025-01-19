#include <iostream>
using namespace std;
int main()
{
    int cups;
    cout << "Enter the no. of cups u have : ";
    cin >> cups;

    // cups greater than 10 and less than 20
    if (cups > 20)
    {
        cout << "Congrats u will get a Gold badge" << endl;
    }
    else if (cups >= 10)
    {
        cout << "Congrats u will get a Silver badge" << endl;
    }
    else
    {
        cout << "Sorry next time !!"<<endl;
    }
    return 0;
}