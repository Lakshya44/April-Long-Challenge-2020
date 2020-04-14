#include <bits/stdc++.h>
using namespace std;
void factor(int n,int k) {
    vector<int> P; 
  
    while (n%2 == 0) 
    { 
        P.push_back(2); 
        n /= 2; 
    } 
  
    for (int i=3; i*i<=n; i=i+2) 
    { 
        while (n%i == 0) 
        { 
            n = n/i; 
            P.push_back(i); 
        } 
    } 
  
    if (n > 2) 
        P.push_back(n); 
  
    if ((int)P.size() < k) 
    { 
        cout << "0" << endl; 
        return; 
    } 
  cout<<"1"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--) {
        int x,k;
        cin>>x>>k;
        factor(x,k);
    }
	return 0;
}
