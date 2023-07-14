// no. of participants aheadd to timur
#include <iostream>
#include <string>
#include <cmath>
#include <assert.h>
#include <cstdlib>
#include <random>
#include <iomanip>
#include <vector>
#include <array>
#include <set>
#include <algorithm>
using namespace std;
#define str to_string
#define in binary_search
#define list vector
#define ll long long
#define ld long double
#define append push_back
#define add insert
#define input(n) cin >> n
#define print(n) cout << n
#define all(x) (x).begin(),(x).end()
#define sum(a) accumulate(all(a),0)
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {   
        ll a,b,c,d;
        a = b = c = d =0;
        cin>>a>>b>>c>>d;
        int cnt=0;
        if(a<b) cnt++;
        if(a<c) cnt++;
        if(a<d) cnt++;
        cout<<cnt<<endl;
        t--;
    }
}
