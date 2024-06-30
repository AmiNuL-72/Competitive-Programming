#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,k;  cin>>n>>k;
    ll mx_and=0,mx_or=0,mx_xor=0;
    for(ll i=1; i<=n; i++){
        for(ll j=i+1; j<=n; j++){
           if((i&j)<k) mx_and=max(mx_and,(i&j));
           if((i|j)<k) mx_or=max(mx_or,(i|j));
           if((i^j)<k) mx_xor=max(mx_xor,(i^j));
        }
    }
    cout<<mx_and<<endl<<mx_or<<endl<<mx_xor<<endl;
    return 0;
}