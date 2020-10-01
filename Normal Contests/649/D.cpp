#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define endl        '\n'
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
const int inf = 5 * (1e+8);
const int mod = 1e+9 + 7;
#define ll long long
vector<int> adj[500005];
vector<int> visited(500005, 0);
vector<int> t(500005, 0);
int flag = 1;
void nothing()
{

}

const int N = 200000; 
vector<int> graph[N]; 
vector<int> cycles[N]; 
void dfs_cycle(int u, int p, int color[], int mark[], int par[], int& cyclenumber) 
{ 
    if (color[u] == 2) { 
        return; 
    } 
    if (color[u] == 1) { 
  
        cyclenumber++; 
        int cur = p; 
        mark[cur] = cyclenumber; 
        while (cur != u) { 
            cur = par[cur]; 
            mark[cur] = cyclenumber; 
        } 
        return; 
    } 
    par[u] = p; 
    color[u] = 1; 
    for (int v : graph[u]) { 
        if (v == par[u]) { 
            continue; 
        } 
        dfs_cycle(v, u, color, mark, par, cyclenumber); 
    } 
    color[u] = 2; 
} 
void addEdge(int u, int v) 
{ 
    graph[u].push_back(v); 
    graph[v].push_back(u); 
} 
void printCycles(int edges, int mark[], int& cyclenumber, int k) 
{ 
    for (int i = 1; i <= edges; i++) { 
        if (mark[i] != 0) 
            cycles[mark[i]].push_back(i); 
    } 

    for (int i = 1; i <= cyclenumber; i++) { 
        // Print the i-th cycle 
        //cout << "Cycle Number " << i << ": "; 
        if(cycles[i].size()<=k)
        {
        	cout<<cycles[i].size()<<"\n";
        for (int x : cycles[i]) 
            cout << x << " "; 
        cout << "\n"; 
        break;
        }
    } 
} 
        void printGraph(vector<int> adj[], int V) 
        { 
            for (int v = 1; v <= V; ++v) 
            { 
                cout << "\n Adjacency list of vertex "
                << v << "\n head "; 
                for (auto x : adj[v]) 
                    cout << "-> " << x; 
                printf("\n"); 
            } 
        }
// Driver Code 
int main() 
{ 
   int n,m,k,a,b,flag=0;
   cin>>n>>m>>k;
    // add edges 
    int arr[n][n],arr2[n];
    // std::memset(arr, 0, sizeof arr);
    rep(i,0,n){
        rep(j,0,n)
        arr[i][j]=0;
    }
    rep(j,0,n)
        arr2[j]=0;
    // std::memset(arr2, 0, sizeof arr2);
    while(m--)
    {
    	cin>>a>>b;
    	addEdge(a, b);
    	arr[a-1][b-1]=1;
    	arr2[a-1]++;
    }
    // printGraph(graph, n);
    rep(i,0,n){
        // cout<<ceil(((float)(k))/((float)2))<<endl;
    if(n-arr2[i]==ceil(((float)(k))/((float)2)))
    {
    	flag=1;
    	cout<<1<<"\n"<<i+1<<" ";
    	for(int j=0;j<n;j++)
    	if(arr[i][j]==0)
    	cout<<j+1<<" ";
    	cout<<"\n";
    }
}  
    if(flag!=1)
    {
    	cout<<2<<"\n";
    int color[N]; 
    int par[N]; 
  
    
    int mark[N]; 
  
    
    int cyclenumber = 0; 
    int edges = 13; 
  
    
    dfs_cycle(1, 0, color, mark, par, cyclenumber); 
  
    
    printCycles(edges, mark, cyclenumber,k); 
    }
    return 0;
} 