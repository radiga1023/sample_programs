// Example program
#include <iostream>
#include <string>

using namespace std;

void reverseString(char* str, unsigned int stringLen)
{
    unsigned int strLength = stringLen - 2;
    unsigned int start = 0;
    unsigned int end = strLength;
    cout << str << endl;
    while (start < end)
    {
        str[start] = str[start] ^ str[end];
        str[end] = str[end] ^ str[start];
        str[start] = str[start] ^ str[end];
        ++start;
        --end;
    }
    cout << str << endl;
    start = 0;
    end = strLength;
    unsigned int we;
    unsigned int wordStart = 0;
    we = 0;
    while (start < (end+2))
    {
        if (str[start] == ' ' || str[start] == '\0')
        {
            unsigned int lstart = wordStart;
            unsigned int lwe = start - 1;
            while (lstart < lwe)
            {
                str[lstart] = str[lstart] ^ str[lwe];
                str[lwe] = str[lwe] ^ str[lstart];
                str[lstart] = str[lstart] ^ str[lwe];
                lstart++;
                lwe--;
            }
            wordStart = start+1;
            //str[wordStart] = ' ';
            start++;
        }
        else
        {
            start++;
            we++;
        }
    }
    cout << str << endl;
}

int main()
{
    char s[] = "India is My Country and I Love My Country";
    unsigned int stringLen = sizeof(s) / sizeof(s[0]);
    reverseString(s, stringLen);
}
