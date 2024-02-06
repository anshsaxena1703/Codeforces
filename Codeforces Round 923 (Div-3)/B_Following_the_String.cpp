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
  map <char,ll> mp;
  char start='a';
  string ans;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x==0){
        ans+=start;
        mp[start]=0;
        start++;
    }
    else{
        for(auto &it:mp){
            if(it.second==x-1){
                ans+=it.first;
                it.second++;
                break;
            }
        }
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