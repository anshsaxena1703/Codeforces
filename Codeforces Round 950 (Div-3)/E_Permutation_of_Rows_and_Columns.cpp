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
  map<vector<ll>,ll> mp1,mp2;
  vector<vector<ll>> a,b;
  for(int i=0;i<n;i++){
    vector<ll> c;
    for(int j=0;j<m;j++){
        ll x;
        cin>>x;
        c.pb(x);
    }
    a.pb(c);
    sort(c.begin(),c.end());
    mp1[c]++;
  }
  for(int i=0;i<m;i++){
    vector<ll> c;
    for(int j=0;j<n;j++){
        c.pb(a[j][i]);
    }
    sort(c.begin(),c.end());
    mp2[c]++;
  }
  bool flag=false;
  for(int i=0;i<n;i++){
    vector<ll> c;
    for(int j=0;j<m;j++){
        ll x;
        cin>>x;
        c.push_back(x);
    }
    b.push_back(c);
    sort(c.begin(),c.end());
    if(mp1.find(c)==mp1.end()) flag=true;
  }

  if(flag==true) cout<<"NO"<<endl;
  else{
    for(int i=0;i<m;i++){
        vector<ll> c;
        for(int j=0;j<n;j++){
            c.pb(b[j][i]);
        }
        sort(c.begin(),c.end());
        if(mp2.find(c)==mp2.end()) flag=true;
    }
    if(flag==false) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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