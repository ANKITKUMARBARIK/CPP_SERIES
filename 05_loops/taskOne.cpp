#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaCups;
    cout << "Enter the number of tea cups to serve : ";
    cin >> teaCups;

    int i = 0;
    while (i < teaCups)
    {
        cout << "Serving a cup of tea" << endl;
        cout << teaCups << " cups remaining" << endl;
        teaCups--;
    }

    cout << "All tea cups are served" << endl;

    return 0;
}
