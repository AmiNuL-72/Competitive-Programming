#include<bits/stdc++.h>
using namespace std;
#define ll   long long
#define pb   push_back
#define yes   cout<<"YES"<<endl
#define no   cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define    gcd(a,b)      __gcd(a,b)
#define    lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
    ll n; cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    //--------------------------------------------------
    // Protibar Arrayr sobgulo valuei use kore
    // kisu value add,kisu sub kore decision nite;;
    //--------------------------------------------------
    bool ok=0;
    for(ll i=0; i<(1<<n); i++){
        ll sum=0;
        for(ll j=0; j<n; j++){
            if(i&(1<<j)){
               sum+=v[j];
            }
            else sum-=v[j];
        }
        if(sum%360==0){ok=1; break;}
    }
    if(ok) yes;
    else no;
}

int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
}