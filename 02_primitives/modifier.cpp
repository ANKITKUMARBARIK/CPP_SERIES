#include <iostream>
using namespace std;

int main()
{
    // unsigned -> allow only positive value
    unsigned smallTeaPack = -100;
    cout<<smallTeaPack<<endl;  //garbage value 😹

    long largeTeaStorage = 100000000;
    // double largeTeaStorage = 100000000;
    // float largeTeaStorage = 100000000;
    cout<<largeTeaStorage<<endl;
    cout<<sizeof(largeTeaStorage)<<endl;

    short teaSample = 25;
    cout<<teaSample<<endl;

    return 0;
}