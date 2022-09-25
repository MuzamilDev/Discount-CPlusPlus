#include<iostream>
using namespace std;

int main()
{
    float OriginalPrice, SalesPrice , Discount,DiscountPercentage;

    cout<<"Enter Original Price of thing; "<<endl;
    cin>>OriginalPrice;

    cout<<"Enter Sales Price: "<<endl;
    cin>>SalesPrice;

    Discount=OriginalPrice-SalesPrice;
    DiscountPercentage=Discount/OriginalPrice*100;

    cout<<"The Shopkeeper Discount Your Product By "<<DiscountPercentage<<"%"<<endl;

    return 0;
}
