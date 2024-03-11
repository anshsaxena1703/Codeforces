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
  vector<ll> a;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
  }
  for(int i=0;i<n-2;i++){
    if(a[i]==0) continue;
    if(a[i+1]<2*a[i]){
        cout<<"NO"<<endl;
        return;
    }
    else{
        if(a[i+2]>=a[i]){
            a[i+1]-=2*a[i];
            a[i+2]-=a[i];
            a[i]=0;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
  }
  for(int i=0;i<n;i++){
    if(a[i]!=0){
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;
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