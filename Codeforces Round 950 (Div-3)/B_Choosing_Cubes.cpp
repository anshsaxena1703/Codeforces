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
  ll n,f,k;
  cin>>n>>f>>k;
  vector<ll> a;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  ll num=a[f-1];
  ll cnt1=0,cnt2=0;
  for(int i=0;i<n;i++){
    if(a[i]>num) cnt1++;
    else if(a[i]==num) cnt2++;
  }
  if(cnt1>=k){
    cout<<"NO"<<endl;
  }
  else if(cnt1+cnt2>k){
    cout<<"MAYBE"<<endl;
  }
  else if(cnt1+cnt2<=k){
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