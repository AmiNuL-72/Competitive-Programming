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

vector<ll>super_lucky;
void Generate_super_lucky(){ 
       
    for(ll len=2; len<=10; len+=2){
        for(ll mask=0; mask<(1<<len); mask++){
            ll cnt4=0,cnt7=0,ck_val=0;
            for(ll i=0; i<len; i++){
                if(mask&(1<<i)){
                    cnt7++;
                    ck_val*=10;
                    ck_val+=7;
                }
                else{
                    cnt4++;
                    ck_val*=10;
                    ck_val+=4;
                }
            }
            if(cnt4==cnt7){
                super_lucky.pb(ck_val);
            }
        }
    }
    sort(all(super_lucky));

    //for(auto u:super_lucky) cout<<u<<endl;
}

void solve(){
    ll n; cin>>n;
    for(auto u:super_lucky){
        if(u>=n){
            cout<<u<<endl;
            return;
        }
    }
}
int main()
{
    optimize();
    ll t=1;
    //cin>>t;
    Generate_super_lucky();
    while(t--) solve();
}