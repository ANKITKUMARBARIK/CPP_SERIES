#include <iostream>
using namespace std;

void pourChai(int cups){  // cups <- get copy of chaiCups     
    cups += 5;
    cout<<"Poured cups(copy value) : "<<cups<<endl;
}

int main()
{
    int chaiCups = 2;
    pourChai(chaiCups);   // call/pass by value
    cout<<"Total chai(original value) : "<<chaiCups<<endl;

    return 0;
}
