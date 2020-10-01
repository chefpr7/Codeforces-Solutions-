#include<bits/stdc++.h>
#define ll long long
#define ar array
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;cin>>T;
    while(T--){
        int n;
        cin>>n;
        vector<int> arr;
        map<int,int> occrs;
        int max_occurance = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr.push_back(x);
            occrs[x]++;
            max_occurance = max(max_occurance,occrs[x]);
        }
        if(max_occurance == 1&&n==1){
            cout<<0<<endl;
            continue;
        }
        if(max_occurance == 1&&n!=1){
            cout<<1<<endl;
            continue;
        }
        if(n&1 && max_occurance != 1){
            int unique_elements = n-max_occurance;
            cout<<unique_elements<<endl;
        }
        else
        {
            int unique_elements = n-max_occurance;
            cout<<unique_elements+1<<endl;
        }

    }

    return 0;
}