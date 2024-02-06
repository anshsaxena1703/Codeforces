/*                         ..............Code by Ansh..............                                       */
#include <bits/stdc++.h>
#include<vector>
#include<iostream>
#include<queue>
#define ll long long
const int MOD = 1e9 + 7;
const int w = 998244353;
#define pb push_back
#define endl "\n"
#define godspeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second < p2.second;
}
void solve()
{
  ll n,q;
  cin>>n;
  vector<ll> a,b(n);
  b[n-1]=n;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  for(int i=n-2;i>=0;i--){
    b[i]=i+1;
    if(a[i]==a[i+1]){
        b[i]=b[i+1];
    }
  }
  cin>>q;
  while(q--){
    ll l,r;
    cin>>l>>r;
    if(b[l-1]>r-1){
        cout<<"-1  -1"<<endl;
    }
    else{
        cout<<l<<" "<<b[l-1]+1<<endl;
    }
  }
  cout<<endl;
}
int32_t main()
{
  godspeed;
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}