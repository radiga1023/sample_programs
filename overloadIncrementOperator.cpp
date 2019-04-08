// Example program
#include <iostream>
#include <string>

class Test
{
    public:
    Test():i(0)
    {
        
    }
    ~Test()
    {
        
    }
    
    int operator++()
    {
        return (this->i)++;
    }
    int operator++(int)
    {
        return (this->i)++;
    }
    void display()
    {
        std::cout <<" i is " << i << std::endl;
    }
    private:
    int i;
    
};
int main()
{
  Test T1;
  T1.display();
  ++T1;
  T1.display();
  Test T2;
  T2.display();
  T2++;
  T2.display();
}
