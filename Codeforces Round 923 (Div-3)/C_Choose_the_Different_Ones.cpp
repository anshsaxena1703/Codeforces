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
  map<ll,ll> mp1,mp2;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
    mp1[x]++;
  }
  for(int i=0;i<m;i++){
    ll x;
    cin>>x;
    b.pb(x);
    mp2[x]++;
  }
  ll cnt1=0,cnt2=0;
  vector<ll> c;
  for(int i=1;i<=k;i++){
    if(mp1.find(i)==mp1.end() && mp2.find(i)==mp2.end()){
        cout<<"NO"<<endl;
        return;
    }
    else if(mp1.find(i)!=mp1.end() && mp2.find(i)==mp2.end()){
        if(cnt1==k/2){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cnt1++;
        }
    }
    else if(mp1.find(i)==mp1.end() && mp2.find(i)!=mp2.end()){
        if(cnt2==k/2){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cnt2++;
        }
    }
    else{
        c.pb(i);
    }
  }
  if(cnt1==k/2 && cnt2==k/2){
    cout<<"YES"<<endl;
  }
  else{
    
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