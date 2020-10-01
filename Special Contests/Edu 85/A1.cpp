#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,f=0;
        int c[n],p[n];
        int x=-1,y=-1;
        for(i=0;i<n;i++){
          cin>>p[i]>>c[i];
          if(c[i]>p[i]){
            f=1;
        }
        if(i!=0){
          if((c[i]-c[i-1])>(p[i]-p[i-1]))
            f=1;
    }
        if(p[i]<x)
            f=1;
        if(c[i]<y)
            f=1;
        x=p[i];
        y=c[i];
    }
    if(f==0){
      cout<<"YES"<<endl;
  }
  else{
      cout<<"NO"<<endl;
  }

}
return 0;
}

