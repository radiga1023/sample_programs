#include <iostream>
using namespace std;

void seiveOfErathostenesis(int n, bool* prime)
{
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    for (int p = 2; p*p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked. 
            for (int i = p*p; i < n; i += p)
            {
                prime[i] = false;
            }
        }
    }
    //Print all the Prime Numebers
    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == true)
            cout << p << " ";
    }
    cout << endl;
}
int main()
{
    bool prime[40 + 1];
    memset(prime, true, sizeof(prime));
    seiveOfErathostenesis(40, prime);
    return 0;
}
