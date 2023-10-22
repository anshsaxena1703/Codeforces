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
bool check(ll n,ll k){
    ll temp=n;
    ll sum=0;
    while(temp>0){
        sum+=temp%10;
        temp/=10;
    }
    if(sum%k==0){
        return true;
    }
    else{
        return false;
    }
}
void solve()
{
    ll x,k;
    cin>>x>>k;
    while(check(x,k)!=true){
        x++;
    }
    cout<<x<<endl;
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