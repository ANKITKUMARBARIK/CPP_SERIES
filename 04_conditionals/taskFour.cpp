#include <iostream>
using namespace std;

int main()
{
    short tea;
    cout << "Select ur tea-----------" << endl;
    cout << "Green Tea (1)" << endl;
    cout << "Black Tea (2)" << endl;
    cout << "Oolong Tea (3)" << endl;

    cout << "Enter a type of tea : ";
    cin >> tea;

    switch (tea)
    {
    case 1:
        cout << "Green Tea : $2" << endl;
        break;
    case 2:
        cout << "Black Tea : $3" << endl;
        break;
    case 3:
        cout << "Oolong Tea : $4" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}
