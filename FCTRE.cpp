#include <bits/stdc++.h>
using namespace std;

#define val 1000005
#define mod 1000000007

int cal[val],x,y,s,d;
map<int,int>check;

long long get_factors() {
    long long factors = 1;
    for(auto &j:check) factors = (factors * (j.second + 1)) % mod;
    return factors;
}

void factorise(int x) {
    if(x==1) return;
    check[cal[x]]++;
    factorise(x/cal[x]);
}

void sieve() {
    cal[1] = 1;
    for(int i=2;i<val;i++) cal[i] = i;
    for(int i=4;i<val;i+=2) cal[i] = 2;
    for(int i=3;i*i<val;i++) {
        if(cal[i]==i) {
            for(int j=i*i;j<val;j+=i) {
                if(cal[j]==j) cal[j] = i;
            }
        }
    }
}

void dfs(int src,int dest,vector<int>adj[],vector<int>&store,map<int,bool>&m,
int w[]) {
    m[src] = true;
    store.push_back(src);
    if(src!=dest){
        for(auto &i:adj[src]) {
            if(!m[i]) dfs(i,dest,adj,store,m,w);
        }
    }
    else {
        for(auto &it:store) factorise(w[it]);
        return;
    }
    m[src] = false;
    store.pop_back();
}
void solve() {
        int n;
        scanf("%d",&n);
        vector<int>v[n+1];
        for(int i=0;i<n-1;i++) {
            scanf("%d",&x);
            scanf("%d",&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int w[n+1];
        for(int i=1;i<n+1;i++) scanf("%d",&w[i]);
        int query;
        scanf("%d",&query);
        while(query--) {
            check.clear();
            scanf("%d",&s);
            scanf("%d",&d);
            vector<int>store;
            map<int,bool>m;
            dfs(s,d,v,store,m,w);
            printf("%d\n",get_factors());
        }
}
int main() {
    sieve();
    int t;
    scanf("%d",&t);
    while(t--) solve();
	return 0;
}
