/*
3 log n distinct word of length 3--> 
vectors are dynamic arrays
here arrays of strings by to  
*/
#include "bits/stdc++.h"
using namespace std;



int main()
{
    int t; cin >>t;
    while(t--)
    {
        int n; cin>>n;
        string arr[3][n]; //matrix of 3*n to store words 
        for(int i = 0 ; i<3 ; i++)
        {
            for(int j = 0 ; j<n ; j++)
            {
                cin>>arr[i][j];
            }
        }
        // make new matrix to store score obtained by each word....this is bad approach
        // make three int variables to store there respective scores
        int guy1, guy2, guy3;
        guy1 = guy2 = guy3 = 0;
        //one more matrix is required to mark the visited word
        int mark[3][n] = {0};
        for(int i = 0 ; i < n ; i++)
        {
            
        }

    }
}