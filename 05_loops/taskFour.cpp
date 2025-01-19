#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    while (true)
    {
        cout << "Do u want more tea (type 'stop' to exit) ? : ";
        getline(cin, response);
        if (response == "stop")
        {
            break; // exit the loop
        }
        cout << "Here is a another cup of tea.." << endl;
    }
    cout << "No more tea will be served to u.." << endl;

    return 0;
}
