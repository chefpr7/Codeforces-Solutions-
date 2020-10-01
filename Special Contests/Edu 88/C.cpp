#include <bits/stdc++.h>
using namespace std;
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        double h,c,t;
        bool flag=true;
        cin>>h>>c>>t;
        if(h==t)
        cout<<1<<endl;
        else if(((h+c)/2)>=t)
        cout<<2<<endl;
        else
        {
           double soln=(t-c)/(2*t-(h+c));
           //cout<<soln<<endl;
           double ans1=abs((((h+c)*ceil(soln)-c)/(2*ceil(soln)-1))-t);
           //cout<<ans1<<endl;
           double ans2=abs((((h+c)*floor(soln)-c)/(2*floor(soln)-1))-t);
           //cout<<ans2<<endl;
           if(ans1<ans2)
            cout<<2*ceil(soln)-1<<endl;
        else
            cout<<2*floor(soln)-1<<endl;
            
        }
    }
    return 0;
}