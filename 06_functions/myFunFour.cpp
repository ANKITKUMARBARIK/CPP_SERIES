#include <iostream>
using namespace std;

int main()
{
    // lamda function --> (anonymous function)
    [](int cups)
    {
        cout << "Preparing " << cups << " cups of tea" << endl;
    }(2); // semicolon must be !

    auto preparedChai = [](int tea) { // 'auto' hold overall function
        cout << "Preparing " << tea << " cups of tea" << endl;
    };
    preparedChai(3);

    return 0;
}
