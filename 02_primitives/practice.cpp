#include<iostream>
#include<string>
using namespace std;
int main(){
    string userTea;
    float price;
    char grade;
    short rating;

    cout<<"Tea name : ";
    cin>>userTea;
    cout<<"Tea price : ";
    cin>>price;
    cout<<"Tea grade : ";
    cin>>grade;
    cout<<"Tea rating : ";
    cin>>rating;

    cout<<userTea<<endl;
    cout<<int(price + (price * 0.10))<<endl;
    cout<<grade<<endl;
    for(int i=0;i<rating;i++){
        cout<<"* ";
    }
    cout<<endl;

    return 0;
}