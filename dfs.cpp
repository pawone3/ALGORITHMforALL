// level of a node in tree

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nn 100
vector<ll>v[nn];
stack<int>ss;
bool vis[nn];
int level[nn];
ll parent[nn];
ll distanc[nn];

using namespace std;

void initialise() {
	for(ll i=0;i<10;i++){
		vis[i]=false;
		level[i]=-1;
		parent[i]=-2;
		distanc[i]=INT_MAX;
	}
}

void dfs(int s) {
	
	ss.push(s);
	vis[s]=true;

	while(!ss.empty()){
		ll x=ss.top();
		ss.pop();
		cout<<x<<" ";
		for(ll i=0;i<v[x].size();i++){
			ll curr=v[x][i];
			if(!vis[curr]){
				vis[curr]=true;
				parent[curr]=x;
				level[curr]=level[parent[curr]]+1;
				distanc[curr]=distanc[parent[curr]]+1;
				ss.push(curr);
			}
		}
	}

}

int main() {

	initialise();
	v[1]={2,3};v[2]={3,1};
	v[3]={1,2};v[4]={5};v[5]={4};v[6]={};

	for(ll j=0;j<7;j++){
		if(!vis[j]){
			dfs(j);
		}
	}
} 