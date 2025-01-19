#include <iostream>
using namespace std;

int main()
{
    int cups;
    double pricePerCup = 2.5, totalPrice, discount;
    cout << "Enter a no. of tea cups : ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if (cups > 20)
    {
        discount = 0.20;
    }
    else if (cups > 10 && cups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    cout << "Total Price : " << totalPrice << endl;
    totalPrice -= totalPrice * discount;
    cout << "Total Price after discount : " << totalPrice << endl;

    return 0;
}
