#include <iostream> // <iostream> - library where input and output code is written
using namespace std;

int main()
{
    // store declaration/un-initialize --- score - variable with integer data type
    int score;  
    score = 150;      // initialization
    cout<<score<<endl;

    int balance = 150;       // initialization
    balance = 200;        // we can change the data
    cout<<balance<<endl;

    const int uid = 3000;   // when we put 'const' - we can't change data
    // uid = 2000;          //but we can't change - const variable
    cout<<uid<<endl;

    // Identifiers - make variable name that make sense..give meaningful name
    cout << "Welcome to zone with cpp" << endl;     // endl - line end
    return 0;       // return - reserved keywords
}

// reserved keyword -> return , if, float, int, for, class, ...etc..