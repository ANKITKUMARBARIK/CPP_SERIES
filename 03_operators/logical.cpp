#include <iostream>
using namespace std;
int main()
{
    bool isStudent;
    int cups;

    cout << "Are u a student (1 for YES and 0 for NO) : ";
    cin >> isStudent;
    cout << "How many cups have of tea have u purchased : ";
    cin >> cups;

    // should be a student OR cups more than 15
    if (isStudent == 1 || cups > 15)
    {
        cout << "U are elibile for a discount" << endl;
    }
    else
    {
        cout << "U are not elibile for a discount" << endl;
    }
    return 0;
}