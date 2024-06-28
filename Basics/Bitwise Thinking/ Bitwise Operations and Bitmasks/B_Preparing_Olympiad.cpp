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
    ll n,l,r,x; 
    cin>>n>>l>>r>>x;
    vector<ll>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
    }
    ll ans=0;
    for(ll i=0; i<(1<<n); i++){
        ll sum=0,c=0, mn=1e9, mx=0;
        for(ll j=0; j<n; j++){
            if(i&(1<<j)){
                c++;
                sum+=v[j];
                mn=min(mn,v[j]);
                mx=max(mx,v[j]);
            }
        }
        if(c>=2 && (sum>=l and sum<=r) && (abs(mx-mn)>=x)){
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    while(t--) solve();
}