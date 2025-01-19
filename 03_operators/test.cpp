#include <iostream>
using namespace std;
int main()
{
    int a = 11000, b = 9000, c = 7000;
    if (a > b)
    {
        if (a > c)
        {
            cout << "A is greater" << endl;
        }
        else
        {
            cout << "C is greater" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "B is greater" << endl;
        }
        else
        {
            cout << "C is greater" << endl;
        }
    }
    return 0;
}