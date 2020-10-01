#include <bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        char arr[n][m];
        ll i,j;
        ll count=0;
        ll count1=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){
            cin>>arr[i][j];
            
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){
            if(arr[i][j]=='*')
            count++;
            
            }
        }
        if(x*2<=y){
            ll z=((n*m)-count)*x;
            cout<<z<<endl;
        }
        
        else
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<m-1;j++)
                {
                    if(arr[i][j]==arr[i][j+1]&&arr[i][j]=='.'){
                    count1++;
                    j++;
                    }
                }
            }
            ll z= (count1*y)+(n*m-2*count1-count)*x;
            cout<<z<<endl;
        }
    }
    return 0;
}