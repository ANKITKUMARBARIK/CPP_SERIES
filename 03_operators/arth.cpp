#include<iostream>
using namespace std;
int main(){
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout<<"Enter the no. of tea cups : ";
    cin>>cups;
    cout<<"Enter the price per cup : ";
    cin>>pricePerCup;

    totalPrice = cups * pricePerCup;

    // app 5% discount if total price is above 100rs
    if(totalPrice > 100){
        discountedPrice = totalPrice - (totalPrice * 5 / 100);
        cout<<"Discounted Price : "<<discountedPrice<<endl;
    }else{
        cout<<"Total Price : "<<totalPrice<<endl;
    }

    cout<<"Thanks for coming!!"<<endl;

    return 0;
}