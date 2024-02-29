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
  string s1,s2;
  cin>>s1>>s2;

  ll x=n-1;
  for(int i=0;i<n-1;i++){
    ll upper=s1[i+1]-'0';
    ll lower=s2[i]-'0';

    if(upper==1 && lower==0){
        x=i;
        break;
    }
  }

  string ans="";
  for(int i=0;i<=x;i++){
    ans+=s1[i];
  }

  for(int i=x;i<n;i++){
    ans+=s2[i];
  }

  cout<<ans<<endl;
  ll cnt=1;
  for(int i=x;i>=0;i--){
    ll upper=s1[i]-'0';
    ll lower=s2[i-1]-'0';
    if(upper==lower) cnt++;
    else break;
  }
  cout<<cnt<<endl;
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