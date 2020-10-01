#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        int c=0;
        int d[n+2];
        d[0]=0;
        d[n+1]=0;
        int x=0;
        for(i=1;i<=n;i++){
        d[i]=b[i-1]-a[i-1];
        if(d[i]<0)
        {
            cout<<"NO"<<endl;
            x=1;
            break;
        }
        }
        if(x==0){
        for(i=0;i<n+1;i++)
        {
            if(d[i]!=d[i+1])
            c++;
        }
        if(c<=2)
        cout<<"YES"<<endl;
        else
        {
            cout<<"NO"<<endl;
        }
        }
        
        
    }
    return 0;
}