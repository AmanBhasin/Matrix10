/*14/8/22 just explaining the problem statement
x,++,--
input--> n i.e. no. of statement in bit++ language
intial val x = 0
*/
#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int x = 0;
    while(n--){
        
        char input[3];
        for(int i = 0; i<3; i--) cin>>input[i];
        if(input[0] == '+') x++;
        else if(input[0] == '-') x--;
        else if(input[1] == '+') x++;
        else x--;
    }  cout<<x<<endl;

}