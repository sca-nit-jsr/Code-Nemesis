/* ##Author : Balasubramanian.R
##Github : https://github.com/Cyberkid2311 
## Link : https://www.hackerearth.com/challenges/college/Code-Nemesis/algorithm/3e134bce37bc43198e8a1a4dc28eb13b/
*/ 

/*The objective of the program is find out minimum number of elements which 
when performed OR operations between them should not return 0.

The only pair which when calculated with OR operation gives 0 is OR operation between 0 and 0.
 0000
+0000
 ----
 0000
 
 Hence logically the answer is always going to be either 3(minimum cycle) or -1(no cycle)
 
 */

#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);           //For Fast input and output
    cin.tie(NULL);                              //For Fast input and output
    long long int t,n,i,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)                             
            count++;                           //The number of zeros is counted
    }
    if(count>=n-1||n<3)                        //If there are less than 2 non-zeros values or 
                                               //if the total number of elements in the array is less than 3,
                                               //then no cycle is formed.
        cout<<"-1"<<endl;
    else
        cout<<"3"<<endl;                       //If there are 2 or more non-zero values then 
                                               //the minimum cycle formed is of 3 values.
    }
}
