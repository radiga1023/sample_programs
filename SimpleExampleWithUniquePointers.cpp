#include <iostream>
#include <memory>
using namespace std;
class BaseClass
{
public:
    BaseClass(){};
    ~BaseClass(){};
    void printHello()
    {
        cout << "Hello World" << endl;
    }
};

int main()
{
    auto ptrA = make_unique<BaseClass>();
    std::unique_ptr<unsigned char[]> ptrB(new unsigned char[10]);
    ptrA->printHello();
    for (unsigned int i = 0; i < 10; i++)
    {
        ptrB[i] = i;
    }
    for (unsigned int i = 0; i < 10; i++)
    {
        cout << "0x" << hex << (unsigned int)ptrB[i] << "\n";
    }
    //unsigned char* ptrC;
    //ptrC = ptrB;
}
