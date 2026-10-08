#include<iostream>
using namespace std;

class Product
{
    private:
    string Product_name;
    int product_id;
    float price;
    float Discount;

public:
    void Input()
    {
        cout<<"____________________ENTER THE PRODUCT DETAILS____________________\n";
        cout<<"Enter the product name : ";
        cin>>Product_name;
        cout<<"Enter the product ID : ";
        cin>>product_id;
        cout<<"Enter the actual product price : ";
        cin>>price;
        cout<<"Enter the Discounted percentage : ";
        cin>>Discount;
}

    float calculateDiscount()
    {
        return (price * Discount) / 100;
    }
    float finalPrice()
    {
        return price - calculateDiscount();
    }

void Display()
{
    cout<<"===========================PRODUCT DETAILS===========================\n";
    cout<<"Product name : "<<Product_name<<"\n";
    cout<<"Product ID : "<<product_id<<"\n";
    cout<<"Actual Price : Rs."<<price<<"\n";
    cout<<"Discount : "<<Discount<<"%\n";
    cout<<"Discounted amount : Rs."<<calculateDiscount()<<"\n";
    cout<<"Discounted price : Rs."<<finalPrice()<<"\n";
    cout<<"=======================================================================\n";
}
};

int main()
{
    Product p;
    p.Input();
    p.Display();
    return 0;
}