#include <iostream>
using namespace std;

void pourChai(int &cups){  // cups <- get reference of chaiCups using '&'     
    cups += 5;
    cout<<"Poured cups(copy value) : "<<cups<<endl;
}

int main()
{
    int chaiCups = 2;
    pourChai(chaiCups);   // call/pass by reference
    cout<<"Total chai(original value) : "<<chaiCups<<endl;

    return 0;
}
