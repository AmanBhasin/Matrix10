// cin.getline(arr,n); --> to take complete sentence  as input
//cin.ignore();
#include  "bits/stdc++.h"
using namespace std;
int main()
{   // learn input mechanism here
    int n; cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore(); // always we keep for some buffer overflow
   
    int currlen = 0 ;
    int mxlen = INT_MIN;
  /* while(arr[j] != '\0'){
    while(arr[i] != ' '){
        currlen++;
        i++;
    }mxlen = max(mxlen, currlen);
    currlen = 0 ;
    j++;
   }
    cout<<mxlen<<endl;
    */
   int i = 0;
   // see ther is always better way ...check out below
    while(1){
        if(arr[i] == '\0') break;
        while(arr[i] != ' '){
            currlen++;
            i++;
        }mxlen = max(mxlen, currlen);
        currlen = 0;
    }
    cout<<mxlen<<endl;



}