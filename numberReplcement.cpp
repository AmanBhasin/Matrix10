// wooooh! accepted!!!

#include "bits/stdc++.h"
using namespace  std;

class relation{
    public :
    int num;
    char corresChar;

    relation(int a, char s)
    {
        num = a;
        corresChar = s;
    }
};

bool search(int x, vector<relation*>r)
{
    for(int i = 0; i<r.size(); i++)
    {
        if(r[i]->num == x) return true;
    }
    return false;
}

bool isAssociative(int a[], string s, vector<relation*> r, int n)
{
    for(int i = 0; i<n; i++)
    {
        if(r.size() == 0 || !search(a[i], r))
        {
            relation* con = new relation(a[i], s[i]);
            r.push_back(con);
        }
        else
        {
            for(int j = 0; j<r.size(); j++)
            {
                if(a[i] == r[j]->num)
                {
                    if(s[i] != r[j]->corresChar) return false;
                }
            }
        }
    }
    return true;
}

int main()
{
    vector<relation*> r;
    // int a[] = {50, 2, 50, 2, 2, 30, 50};
    // string s = "cacaaac";
    // int n = 7;
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        string s;
        cin>>s;
        if(isAssociative(a,s,r,n)) cout<< "YES"<<endl;
        else cout<<"NO"<<endl;
    }
}