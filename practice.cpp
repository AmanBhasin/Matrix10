// vasya color blind
#include "bits/stdc++.h"
using namespace std;

string identical(string str1, string str2 , int n)
{
    char p1, p2;
    p1 = p2 = 0;
    while(n--){
        if(str1[p1] != str2[p2] && str1[p1] == 'R')
        {
           
            return "NO";
        }
        if(str1[p1] != str2[p2] && ((str1[p1] == 'B' && str2[p2] == 'G') || (str1[p1] == 'G' && str2[p2] == 'B')))
        {
            p1++;
            p2++;
        }
        p1++;p2++;
    }
    return "YES";
}

int main()
{
   
int t ; cin>>t;
    while(t--){
        int n ; cin>>n; //n is the  length of string
        string str1; cin>>str1;
        string str2; cin>>str2;
        cout<<identical(str1, str2, n)<<endl;
    }
}
