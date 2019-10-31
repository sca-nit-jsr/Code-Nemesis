/* ##Author : Sudhir Verma
##Github : https://github.com/Cyberkid2311 
## Link : https://www.hackerearth.com/challenges/college/Code-Nemesis/algorithm/8c6e5dcb80a74ea2b48850821fef2283/
*/ 

/* The objective of the program is to find the positive distance between the rockets. 
Since the values of a,b and n is large we cannot derive the direct modulas for the values,
so we use Modular Exponentiation (Power in Modular Arithmetic).

To read more about it use the link provided below:
https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
*/

#include<iostream>
#include<math.h>
#define mod 1000000007
using namespace std;
long long int power(long long int x, long long int y, long long int p)        //Code for modular exponentiation
{
    long long int res = 1;
    x = x % p;
    while(y>0)
    {
        if(y&1)
        res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
		long long int a,b,n;
        cin>>a>>b>>n;
        long long int x = power(max(a, b), n, mod);               //Calculating the maximum value raised to the power n.
        long long int y = power(min(a, b), n, mod);               //Calculating the minimum value raised to the power n.
        long long int ans = (x-y+mod)%mod;                        //If the value of x is less than y then the answer might be in negative,
                                                                  //In order to overcome it we add the value of mod to it.
        cout<<ans<<endl;
	}
	return 0;
}
