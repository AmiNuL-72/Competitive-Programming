/*
void solve(){
    ll n; cin>>n;
    for(ll i=0; i<(1<<n); i++){
        for(ll j=0; j<n; j++){
            if(i&(1<<j)) cout<<j<<' ';
        }
        cout<<endl;
    }
}
*/

/*/----------------------------------------------------------------
//Compute the biggest power of 2 that is a divisor of x. Example: f(12) = 4
#include<bits/stdc++.h>
using namespace std;
#define ll   long long

int main()
{
    int n; cin>>n;
    //int x=__builtin_popcount(n);
    int x=__builtin_ctz(n);
    cout<<(1<<x);
}
*/
//----------------------------------------------------------------
//Compute the smallest power of 2 that is not smaller than x. Example: f(12) = 16
// :~>    1<<(32 - __builtin_clz(x-1))
#include<bits/stdc++.h>
using namespace std;
#define ll   long long

int main()
{
    int n; cin>>n;
    ll x=0;
    while((1<<x)<n){
        x++;
    }
    cout<<(1<<x)<<endl;
}