// Example program
#include <iostream>
using namespace std;


int main()
{
    int arr[4][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };

    int R, C;
    R = C = 0;
    int numElements = 4;
    int Elements = 1;
    bool upper = true;

    for (int k = 0; k < ((numElements*2)-1); k++)
    {
        for (int i = 0; i < Elements; i++)
        {
            //If the Matrix is 4x4, then middle diagonal line will have max of 4 Elements; we print all here
            if (R > 0) R -= 1;  //First Element Skip Subtraction for Row Index
            cout << arr[R][C] << " ";// Print the element
            C += 1;     //Increment the Column Index
        }
        //Elements for the selected diagonal line is complete
        cout << endl;
        if (Elements >= numElements) upper = false; //We are Splitting the entire matrix into two parts, upto middle diagonal upper
        if ((Elements < numElements) && upper)
            Elements += 1; //Elements till we reach middle diagonal will be in increasing order
        else
            Elements -= 1; //Elements after we reach middle diagonal will be in decreasing order

        if (upper)
        {
            R = Elements; // R will decrement from 'Elements'
            C = 0; //Till middle diagonal, C will start from 0
        }
        else
        {
            C = numElements - Elements; //After middle diagonal, C will increment in order 1,2,3
            R = numElements;    //R will decrement from numElements
        }
    }

    return 0;
}

/*
Output:
1
5 2
9 6 3
13 10 7 4
14 11 8
15 12
16
*/
