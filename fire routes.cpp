#include<bits/stdc++.h>
#include <iostream>
using namespace std;

#define MOD 1000000007

int n,m,a,b;
vector<vector<int>>v;
vector<bool>vis;

int dfs(int node,int c)
{
    vis[node]=true;
    
    for(int i=0;i<v[node].size();i++)
    {
        if(!vis[v[node][i]])
        {
            c=dfs(v[node][i],c);
        }
    }
    return c+1;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	
	while(t--)
	{

	    
	    cin>>n>>m;
	    v.assign(n,vector<int>());
	    vis.assign(n,false);
	    for(int i=0;i<m;i++)
	    {
	        cin>>a>>b;
	        v[a-1].push_back(b-1);
	        v[b-1].push_back(a-1);
	        
	    }
	    int count=0;long long res=1;
	    for(int i=0;i<n;i++)
	    {
	        if(vis[i]==false)
	        {
	            count++;
	            res*=dfs(i,0);
	            res= res% MOD;
	        }
	    }
	    cout<<count<<" "<<res<<"\n";
	}
	return 0;
}
