#include<bits/stdc++.h>
using namespace std;
 #define inf 1e18
#define ll long long
 
int main() {
    ios_base::sync_with_stdio(false); 
cin.tie(0); 
cout.tie(0);
    ll q;
    cin>>q;
    while(q--){
        ll n;
        cin>>n;
        ll a[n],b[n],x[n],y[n],res[n];
        ll i,pos,ans=1e18;
        for(i=0;i<n;i++){
            cin>>a[i]>>b[i];
            if(i>0)
                res[i]=max(0ll,a[i]-b[i-1]);
        }
        res[0]=max(0ll,a[0]-b[n-1]);
        x[n-1]=res[n-1];
        for(i=n-2;i>=0;i--){
            x[i]=x[i]+x[i+1];
        }
        y[0]=res[0];
        for(i=1;i<n;i++){
            y[i]=y[i-1]+res[i];
        }
        for(i=0;i<n;i++){
            if(i==0){pos=a[i]+x[i+1];}
            else if(i==n-1){
                pos=a[i]+y[i-1];
            }
            else{
                pos=a[i]+x[i+1]+y[i-1];
            }
            ans=min(pos,ans);
        }
        cout<<ans<<endl;
    }
 
    return 0;
 
}