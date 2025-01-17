#include <iostream>
#include <string>
using namespace std;

int main()
{

    string userTea;
    int teaQuantity;

    cout << "What would u like to order in tea? \n";
    // getline(cin, userTea);
    cin>>userTea;

    // ask for quantity
    cout<<"How many cups of "<<userTea<<" would u like to have? \n";
    cin>>teaQuantity;

    cout<<userTea<<endl;
    cout<<teaQuantity<<endl;

    return 0;
}