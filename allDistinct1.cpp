// got approach from sourabh
// still bug is there ....didn't run for 9, 1, 9, 9, 1
#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    int cnt =n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int nn = 0;
    for(int i = 0; i<n; )
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
             cnt -= 2;
            while(arr[j] == arr[j+1] || j == n-1) {
                if (j == n-1) break;
                j++;
                }
            }if (j == n-1) break;
            nn = j;
        }
        if(nn == n-1) break;
        i += nn;
    }
    cout<<cnt<<endl;

}