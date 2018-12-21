#include <iostream>
using namespace std;

void findNextBigElement(int *array, int size)
{
	for (int i = 0; i < size;i++)
	{
		int next = -1;
		for (int j = i+1; j < size; j++)
		{
			if ((array[i] < array[j]))
			{
			    next = array[j];
			    break;
			}
		}
		cout << "Next Big Element after array[" << i << "] :" << next << endl; 
	}
}

int main()
{
	int array[] = {3,5,1,10,2};
	int n = sizeof(array)/sizeof(array[0]);
	findNextBigElement(array, n);
	return 0;
}
