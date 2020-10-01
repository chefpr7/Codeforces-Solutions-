#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e6+5;
#define mod 1e9+7
const ll INF=mod;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> c;
        vector<ll> a;
        vector<ll> b;
        ll k=n/2;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            c.push_back(x);
        }
        sort(c.begin(),c.end());
        reverse(c.begin(),c.end());
        for(ll i=0;i<n;i++){
            if(i<k){
                a.push_back(c[i]);
            } 
            else{
                b.push_back(c[i]);
            }
        }
        reverse(b.begin(),b.end());
        for(ll i=0;i<n;i++){
            if(i%2==0){
                cout<<b.back()<<" ";
                b.pop_back();
            } 
            else{
                cout<<a.back()<<" ";
                a.pop_back();
            }
        }
        cout<<"\n";
    }
    return 0;
}

