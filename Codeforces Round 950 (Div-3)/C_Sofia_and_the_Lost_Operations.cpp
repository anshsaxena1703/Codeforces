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
bool isSet(ll x, ll bit) {
  return ((x >> bit) & 1ll) == 1ll;
}
bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second < p2.second;
}

void solve()
{
  ll n;
  cin>>n;
  vector<ll> a,b;
  map<ll,ll> mp1;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    b.pb(x);
    mp1[x]++;
  }
  ll m;
  cin>>m;
  vector<ll> d;
  map<ll,ll> mp2;
  for(int i=0;i<m;i++){
    ll x;
    cin>>x;
    d.pb(x);
    mp2[x]++;
  }
  if(mp1.find(d[m-1])==mp1.end()){
    cout<<"NO"<<endl;
  }
  else{
    for(int i=0;i<n;i++){
        if(mp2[b[i]]==0 && b[i]!=a[i]){
            cout<<"NO"<<endl;
            return;
        }
        else{
            if(b[i]!=a[i]){
                mp2[b[i]]--;
            }
        }
    }
    cout<<"YES"<<endl;
  }
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