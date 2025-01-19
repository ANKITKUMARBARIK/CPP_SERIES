#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teaCups;

    do
    {
        cout << "Do u want more tea (yes/no) : ";
        getline(cin, teaCups);
    } while (teaCups == "yes" || teaCups == "Yes");

    return 0;
}
