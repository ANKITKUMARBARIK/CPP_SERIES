#include <iostream>
#include <vector>
using namespace std;

class Bank
{
public: // by default private
    // data members
    string name;             // username
    int srno;                // srno of form
    vector<string> bankName; // list of the name for bank --> like Array

    // member functions
    void displayBankDetails()
    {
        cout << "Username : " << name << endl;
        cout << "SrNo : " << srno << endl;
        cout << "Bank Name : " << name << endl;
        for (string bankname : bankName)
        {
            cout << bankname << " ";
        }
        cout << endl;
    }
}; // semicolon must be put

int main()
{
    Bank banker1; // banker1 -> object1

    // access with .
    banker1.name = "admin";
    banker1.srno = 231;
    banker1.bankName = {"SBI", "BOB", "FB", "HDFC"};
    banker1.displayBankDetails();

    Bank banker2;  // banker2 -> object2

    banker2.name = "anonymous";
    banker2.srno = 423;
    banker2.bankName = {"SBI", "BOB", "FB", "HDFC"};
    banker2.displayBankDetails();

    return 0;
}