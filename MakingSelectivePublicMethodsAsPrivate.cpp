/** The purpose of this example is to demonstrate how one can make methods declared as 
* public in the base class as private in the derived class
*/
#include <iostream>
using namespace std;

class BaseClass
{
public:
  BaseClass()
  {
   cout << "BaseClass Constructor" << endl;
  }
  virtual ~BaseClass()
  {
    cout << "BaseClass Destructor" << endl;
  }
  
  void setValue(unsigned int val)
  {
    i = val;
  }
  
  unsigned int getValue()
  {
    return i;
  }
private:
  unsigned int i;
};

class DerivedClass : public BaseClass
{
private:
  unsigned int jam;
  using BaseClass::getValue(); //Making setValue() and getValue() as private in the Derived Class
  using BaseClass::setValue();
public:
  DerivedClass()
  {
    cout << "Derived Class Constructor" << endl;
  }
  virtual ~DerivedClass()
  {
    cout << "Derived Class Destructor" << endl;
  }
  void setValueDerived(unsigned int val)
  {
    jam = val;
  }
  
  unsigned int getValueDerived()
  {
    getValue();
    return jam;
  }
};

int main()
{
  DerivedClass D;
  D.setValueDerived(2);
  
}
