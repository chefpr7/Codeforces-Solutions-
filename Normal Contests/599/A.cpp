#include<bits/stdc++.h>
using namespace std;
#define ll long long int
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> V(n);
        for(ll i=0;i<n;i++){
            cin>>V[i];
        }
        sort(V.begin(),V.end());
        ll val = V[n-1];
        ll k = 1;
        for(ll i=n-2;i>=0;i--){
            if(k >= val){
                break;
            }
            val = min(val,V[i]);
            k += 1;
        }
        if(k > val){
            cout<<k-1<<endl;
        }
        else{
            cout<<min(k,val)<<endl;
        }
    }
}