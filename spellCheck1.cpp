// ascii value of all caps is lower than lowerones
// a->z ascii increases
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void spellcheck(string str)
{
    //timur -> Timru
     sort(str.begin(), str.end()); // does not return any string or something just sort
    //cout<<str == "Timru" ? "yes" : "no" <<endl;
    str == "Timru"? cout<<"yes"<<endl : cout<<"no"<<endl;
}

int main()
{
    int t; cin>>t; //t is the no of test caases
    while(t--)
    {
        int n; cin>>n; //length of input string
        string str; cin>>str;
        spellcheck(str);
    }
}