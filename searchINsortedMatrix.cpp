// given that all row and columns of given matrix are sorted and task is to search any ekement
// appraoch is very awesome 
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j =0 ; j<m ;j++)
        {
            cin>>a[i][j];
        }
    }
    int i = 0 , j = m-1;
    while(a[i][j] != target)
    {   
        if(i<0 || j<0 || i>=n || j>=m){
            cout<<"does not exist";
            break;
        }
        if(a[i][j]>target) j--;
        else if(a[i][j]<target) i++;
        else {
            
            break;
        }
    }
    cout<<"exists";
}