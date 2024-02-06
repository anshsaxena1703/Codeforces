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
  string s;
  cin>>s;
  ll ans=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='B'){
        ans=i-1;
        break;
    }
  }
  for(int i=s.length()-1;i>=0;i--){
    if(s[i]=='B'){
        cout<<i-ans<<endl;
        return;
    }
  }
  cout<<0<<endl;
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