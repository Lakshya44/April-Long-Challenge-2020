#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  vector<pair<int,int>>v;
  int num = 1;
  for(int i=0;i<500001;i++) {
    v.push_back(make_pair(num,num+1));
    num+=2;
  }
  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    if(n==1) {
        cout<<"1"<<'\n';
        cout<<"1 1"<<'\n';
        continue;
    }
    cout<<n/2<<'\n';
    for(int i=0;i<(n/2)-1;i++) cout<<"2 "<<v[i].first<<" "<<v[i].second<<'\n';
    if(n&1) cout<<"3 "<<v[(n/2)-1].first<<" "<<v[(n/2)-1].second<<" "<<n<<'\n';
    else cout<<"2 "<<v[(n/2)-1].first<<" "<<v[(n/2)-1].second<<'\n';
  }
  return 0;
}
