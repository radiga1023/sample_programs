#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverseWords(string str)
{
stack<char> st;

for (unsigned int i = 0; i < str.length(); i++)
{
  if (str[i] != ' ')
   st.push(str[i]);
  else
  {
    while(st.empty() == false)
    {
      cout << st.top();
      st.pop();
    }
    cout << " " ;
  }
}
 while (st.empty() == false) 
 { 
    cout << st.top(); 
    st.pop(); 
 }
}/*EOF void reverseWords(string str)*/

int main()
{
  string myString = "Hi This is a Test!";
  reverseWords(myString);
  return 0;
}
