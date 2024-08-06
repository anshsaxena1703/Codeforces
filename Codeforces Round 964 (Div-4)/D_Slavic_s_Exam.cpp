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
    string s,t;
    cin>>s>>t;
    ll start=0;
    for(int i=0;i<s.length();i++){
        if(t[start]==s[i] || s[i]=='?'){
            if(s[i]=='?') s[i]=t[start];
            start++;
            if(start==t.length()) break;
        }
    }
    if(start!=t.length()){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]=='?') s[i]='a';
    }
    cout<<s<<endl;
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