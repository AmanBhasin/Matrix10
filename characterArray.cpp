#include <iostream>
using namespace std;
int main()
{
    // declare char arr[n+1] for making it of n ....why?? beacus last char is \0
    char arr[100] = "rahul";
    int i =0; 
    while(arr[i] != '\0'){
        cout<<arr[i]<<" ";
        i++;
    }

    //  taking input in charaacter array
    char ar[100];
    cin>>ar;
    cout<<ar;
}