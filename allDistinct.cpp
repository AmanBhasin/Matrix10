/*
array given --> operation that can be made is that you can choose any two index and remove elements corresponnding to those indices
                and the final array should be of max length that containing all distinct elements 
*/

#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n ;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ;i++)
    {
        cin>>a[i];
    }
    int out[n];
    int k=0 , cnt=0;
    for(int i =0 ; i<n ; i++)
    {
        out[i] = -1;
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j < i ; j++)
        {
            if(a[i] == a[j])
            {
                cnt = 1;
                
                break;
            }
        }
        if(cnt == 0) {
                out[k] = a[i];
                k++;
            }cnt = 0;
    }
    
        if((n - (k-1)) % 2 == 0) cout<<k-1<<endl;
        else cout<<k -2 << endl;
}



// note that this brute force soln and nnot completely correect but 
// correct for implementing the set or say it brute force code to get all distincts in array