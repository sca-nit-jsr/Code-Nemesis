/* ##Author : Balasubramanian.R
##Github : https://github.com/Cyberkid2311 
## Link : https://www.hackerearth.com/challenges/college/Code-Nemesis/algorithm/1245bacc217a47578c753f93868dd0af/
*/ 

/* The main aim of this program is to find how many values from the boys 
when added with the values of girls, gives the desired sum. 
According to the constraints, the sum of the maximum value of the boys and
the sum of maximum value of the girls is equal to 10^6.

So we create an array of size 10^6. We then, traverse through the given values 
and increase the count of the obtained Sum in the new array.*/

#include<iostream>
using namespace std;

int main()
{
    long long int n,m,q,k,i,j;    
    cin>>n>>m;
    long long int a[n],b[m];
    for(i=0;i<n;i++)
    {
        cin>>a[i];                        //Values of the boys are obtained and saved in the array 'a'. 
    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];                        //Values of the girls are obtained and saved in the array 'b'.
    }
    long long int hash[1000001]={0};      //Array hash is initialized to store the count of the sum.
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            hash[a[i]+b[j]]++;            //The sum is calculated and the corresponding value in the hash array is incremented by 21
        }
    }
    cin>>q;                               // q denotes the number of queries.
    while(q--)                  
    {
        cin>>k;
        cout<<hash[k]<<endl;              // The value of k in the hash array gives the count.
    }
}
