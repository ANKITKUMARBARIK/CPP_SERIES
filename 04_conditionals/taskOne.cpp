#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teaOrder;

    cout << "Enter ur tea order : ";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea")
        cout << "U have ordered Green Tea" << endl;

    return 0;
}

// cin ka use tab karta hai jab input space ya newline se separate ho. Agar tum multi-word input doge jaise "Green Tea", toh cin sirf pehle word ("Green") ko capture karega aur "Tea" ko ignore karega. 
// Multi-word input lene ke liye getline() ka use karna chahiye.