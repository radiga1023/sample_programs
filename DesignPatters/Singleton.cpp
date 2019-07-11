#include <iostream>
using namespace std;

class Test
{
  public:
    static Test& getInstance()
    {
      static Test obj;
      return obj;
    }
    Test operator=(const Test&) = delete;
    Test(const Test&) = delete;
  private:
  Test() {}
};

int main()
{
  Test*T1 = Test::getInstance();
  Test T2;//Error Will be Printed as the constructor is private
  return 0;
}
