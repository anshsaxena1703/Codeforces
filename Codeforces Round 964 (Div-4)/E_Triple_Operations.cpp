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
vector<ll> vect(ll n) { vector<ll> ans(n);for(ll i = 0 ; i < n ; i++){cin >> ans[i];}return ans; }
bool isSet(ll x, ll bit) {
  return ((x >> bit) & 1ll) == 1ll;
}
bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
  return p1.second < p2.second;
}
map<ll,ll> mp;
vector<ll> a;
void solve()
{
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    ans=a[r];

    ans-=a[l];

    ans+=2*mp[l];
    /*for(int i=l+1;i<=r;i++){
        ans+=mp[i];
    }
    ans+=2*mp[l];*/

    cout<<ans<<endl;
}
int32_t main()
{
  godspeed;
  int t = 1;
  cin >> t;
  ll cnt=2;
  ll start=1;
  mp[0]=0;
  a.pb(0);
  for(int i=3;i<=200000;i*=3){
    mp[i]=cnt;
    cnt++;
  }
  cnt=1;
  for(int i=1;i<=200000;i++){
    if(mp.find(i)!=mp.end()){
        cnt++;
        a.pb(a.back()+mp[i]);
        continue;
    }
    mp[i]=cnt;
    a.pb(a.back()+mp[i]);
  }
  while (t--)
  {
    solve();
  }
  return 0;
}
