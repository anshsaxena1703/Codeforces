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
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> a;
    for(int i=0;i<n;i++){
        vector<ll> b;
        for(int i=0;i<m;i++){
            ll x;
            cin>>x;
            b.pb(x);
        }
        a.pb(b);
    }
    vector<vector<ll>> ans=a;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll maxi=INT_MIN;
            if(i-1>=0){
                if(a[i-1][j]>=a[i][j]){
                    continue;
                }
                else{
                    maxi=max(maxi,ans[i-1][j]);
                }
            }
            if(i+1<n){
                if(a[i+1][j]>=a[i][j]){
                    continue;
                }
                else{
                    maxi=max(maxi,ans[i+1][j]);
                }
            }
            if(j+1<m){
                if(a[i][j+1]>=a[i][j]){
                    continue;
                }
                else{
                    maxi=max(maxi,ans[i][j+1]);
                }
            }
            if(j-1>=0){
                if(a[i][j-1]>=a[i][j]){
                    continue;
                }
                else{
                    maxi=max(maxi,ans[i][j-1]);
                }
            }
            ans[i][j]=maxi;

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
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
