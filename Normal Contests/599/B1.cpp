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
        string s,t;
        cin>>s>>t;
        ll cnt = 0;
        vector<ll> V;
        for(ll i=0;i<n;i++){
            if(s[i] != t[i]){
                cnt += 1;
                V.push_back(i);
            }
            if(cnt > 2){
                break;
            }
        }
        if(cnt > 2 || cnt == 1){
            cout<<"No"<<endl;
        }
        else{
            if(cnt == 0){
                cout<<"Yes"<<endl;
            }
            else{
                ll x = V[0];
                ll y = V[1];
                if(t[x] == t[y] && s[y] == s[x]){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
        }
    }
}