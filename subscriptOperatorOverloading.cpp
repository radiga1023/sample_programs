#include <iostream>
using namespace std;

class myArray
{
  private:
    int arrLength;
    int *array;
  public:
    myArray( int Length = 0)
    {
      arrLength = Length;
      array = NULL;
      if (arrLength != 0)
      {
        array = new int[arrLength];
      }
    }
    int &operator[](int index)
    {
      if (index > arrLength)
      {
        cout << "ERROR: myArray out of Bounds" << endl;
        return array[0];
      }
      else
      {
        return this->array[index];
      }
    }
};

int main()
{
  myArray array(10);
  array[2] = 6;
  array[3] = 4;
  cout << "array[2]: " << array[2] << endl;
  cout << "array[2]: " << array[3] << endl;
  return 0;
}
