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
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll> a,b;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  for(int i=0;i<m;i++){
    ll x;
    cin>>x;
    b.pb(x);
  }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  ll ans=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(a[i]+b[j]<=k){
            ans++;
        }
        else break;
    }
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