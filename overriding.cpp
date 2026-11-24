
#include<iostream>
using namespace std;

Class Animal
{
  public:
         virtual void sound()
        {
         cout <<"Animal make sound "<<endl;
        }
      };

Class Dog: public Animal
{
 public:
        void sound()
{
 cout <<"Dog bark"<<endl;
}
};

int main()
{

 Animal *ptr;
 Dog d;

 ptr=&d;
 ptr->sound();
 return 0;
}
