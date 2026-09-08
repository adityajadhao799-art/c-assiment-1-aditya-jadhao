#include<iostream>
using namespace std;
class Rectangle
{
private:
float length,breadth;
public:
void getData()
{

         cout<<"Enter length:";
         cin>>length;
         cout<<"Enter breadth:";
         cin>>breadth;
}

        // Function declared inside,define outside
  float area();
  float perimeter();

  void display()
{
        cout<<"Area = "<<area()<<"\n";
        cout<<"Perimeter = "<<perimeter()<<"\n";

}

};

        // function define outside the class
  float Rectangle::area()
  
  {
    return length+breadth;
  }

        // function define outside the class
  float Rectangle:: perimeter()

  {
    return 2*(length+breadth);
  }

  int main()
  {

  Rectangle r;
  r.getData();
  r.display();
  return 0;

 
  }      
        


 
