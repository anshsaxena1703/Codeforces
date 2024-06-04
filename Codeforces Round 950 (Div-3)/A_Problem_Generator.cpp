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
  ll n,m;
  cin>>n>>m;
  string s;
  cin>>s;
  map<char,ll> mp;
  for(int i=0;i<n;i++){
    mp[s[i]]++;
  }
  ll ans=0;
  for(auto it:mp){
    if(it.second<m){
        ans+=m-it.second;
    }
  }
  if(mp.find('A')==mp.end()){
    ans+=m;
  }
  if(mp.find('B')==mp.end()){
    ans+=m;
  }
  if(mp.find('C')==mp.end()){
    ans+=m;
  }
  if(mp.find('D')==mp.end()){
    ans+=m;
  }
  if(mp.find('E')==mp.end()){
    ans+=m;
  }
  if(mp.find('F')==mp.end()){
    ans+=m;
  }
  if(mp.find('G')==mp.end()){
    ans+=m;
  }
  cout<<ans<<endl;
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