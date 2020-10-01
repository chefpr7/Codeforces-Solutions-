#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define ios ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main()
{
	ll r,c;
    cin>>r>>c;
    ll arr[r][c];
    if (r==1 && c==1){
        cout<<0;
        return 0;
    }
    if (r==1){
        rep(i,0,c){
            cout<<i+2<<" "; 
        }
        return 0;
    }

    rep(i,0,r){
        arr[i][0]=i+2;
    }
    rep(i,1,c){
        rep(j,0,r){
            arr[j][i]=arr[j][0]*(i+r+1);
        }
    }
    rep(i,0,r){
        rep(j,0,c){
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
	return 0;
}