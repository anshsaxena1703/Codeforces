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

void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
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