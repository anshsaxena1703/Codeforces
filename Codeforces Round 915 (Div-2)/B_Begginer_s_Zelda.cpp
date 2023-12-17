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
  ll n;
  cin>>n;
  map<ll,ll> mp;
  for(int i=0;i<n-1;i++){
    ll x,y;
    cin>>x>>y;
    mp[x]++;
    mp[y]++;
  }
  ll cnt=0;
  for(auto it:mp){
    if(it.second==1){
        cnt++;
    }
  }
  if(cnt%2==0){
    cout<<cnt/2<<endl;
  }
  else{
    cout<<(cnt/2)+1<<endl;
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