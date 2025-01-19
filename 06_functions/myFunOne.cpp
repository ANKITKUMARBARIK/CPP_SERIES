#include <iostream>
using namespace std;

int checkTemperature(int temperature) // pass parameters
{
    return temperature;
}

// declaration of function
void serveChai(int cups);

// default parameter
void makeChai()
{
    cout << "Boiling water, adding tealeaves, straining..." << endl;
}

// u can give default value, if user don't provide any parameters
void serveChai(string teaType = "Masala Tea")
{
    cout << "Serving : " << teaType << endl;
}

int main()
{
    // we should be store that return value....
    int temp = checkTemperature(50); // pass arguments
    cout << "Temperature : " << temp << endl;

    serveChai(3); // invoke / calling

    makeChai(); // invoke / call

    serveChai("Black Tea");
    serveChai();

    return 0;
}

// definiton of function
void serveChai(int cups)
{
    cout << "Serving " << cups << " cups of chai" << endl;
}
