#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin >> n;
    char word[n+1];
    cin>>word;
    char i = 0, j = n-1 ;//
    while(i<=j){
        if(word[i] == word[j])
        {
            i++;
            j--;
        } else {
            cout<<"not palinndrome";
            break;
        }
    }
    if(i - j == 1 ||i - j == 2  ){
        cout<<"is palindrone";
    }
}