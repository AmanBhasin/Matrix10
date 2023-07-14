/*-- target is to kniw the whether spell  is correct 
length = 5 ;
timur t should be upper case
search for all n^2
timur == 12345
traverse string with switch case geet precendence of string[i] = mark the idx array  with 1 then traverse 
idx array if any comes -1 return false
*/
#include "bits/stdc++.h"
using namespace std;
int precedence(char s)
{
    int r = 0;
    switch(s){
    case 1 : 
  {  s == 'T';
    r = 0;
    break;
  }

  case 2 :
  {
    s == 'i';
    r = 1;
    break;
  }

  case 3:
  {
    s == 'm';

    r = 2;
    break;
  }

  case 4:
  {
    s == 'u';
    r = 3;
    break;
  }

  case 5 :
  {
    s == 'r';
    r = 4;
    break;
  }
    }
    return r;
}

bool spellCheck(string str)
{
    if(str.length() != 5)
    {
        return false;
    }
    int idx[5] = {0};
    for(int i = 0 ; i<5 ; i++)
    {
        int r = precedence(str[i]);
        idx[r] = 1;
    }
    for(int i = 0 ; i<5 ; i++)
    { 
        if(idx[i] == 0) return false; 
    }
    return true;
}

int main()
{
    string str1 = "Timur";
    string str2 = "chutiya";
    string str3 = "locky";
    cout<<spellCheck(str1)<<endl;
     cout<<spellCheck(str2)<<endl;
      cout<<spellCheck(str3)<<endl;
    

}