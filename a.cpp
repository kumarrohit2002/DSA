#include<iostream>
using namespace std;

int main(){
    int coffee_unit;
    int capochino_unit;
    int chai_unit;
    int total_price;
    cout<<"Enter Coffee Unit: ";
    cin>>coffee_unit;
    cout<<"Enter capochino Unit: ";
    cin>>capochino_unit;
    cout<<"Enter chai Unit: ";
    cin>>chai_unit;

    total_price=(120*coffee_unit)+(150*capochino_unit)+(170*chai_unit);

    if(total_price>=500){
        total_price=total_price-((total_price/100)*10);
        cout<<"Total Price with 10% discount: "<<total_price;
    }else{
        cout<<"Total Price: "<<total_price;
    }
    return 0;
}