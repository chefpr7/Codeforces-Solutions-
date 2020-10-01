#include <bits/stdc++.h>

using namespace std;
#define int long long
void solve()
{
    int a,b,c;
       cin>>a>>b>>c;
       int x,y;
       x=(a>=c) ? -1:1;
       y=(a*b>c)? b:-1;
       cout<<x<<" "<<y<<endl;
       return;
}
int32_t main()
{
   int t;
   cin>>t;
   while(t--){
       solve();
   }
   
   return 0;
}