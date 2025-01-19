#include<iostream>
using namespace std;
int main(){
    int teaBags;

    cout<<"Enter the no. of tea bags : ";
    cin>>teaBags;
    
    if(teaBags > 10) teaBags += 5; 

    cout<<"Total Tea Bags : "<<teaBags<<endl;
    
    return 0;
}