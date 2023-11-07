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
    map<ll,ll> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    ll cnt=0;
    vector<ll> b;
    for(auto it:mp){
        if(it.second>=2){
            cnt++;
            b.pb(it.second);
        }
    }

    if(cnt<2){
        cout<<-1<<endl;
    }
    else{
        vector<ll> ans(n,0);
        ll num1=0;

        for(auto it:mp){
            if(it.second>=2){
                num1=it.first;
                break;
            }
        }

        vector<ll> vis(n,0);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]==a[j] && vis[j]==0 && vis[i]==0){
                    ans[j]=2;
                    vis[j]=1;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(a[i]==num1){
                for(int j=i+1;j<n;j++){
                    if(a[j]==num1){
                        ans[j]=3;
                    }
                }
            }
        }

        for(int i=0;i<n;i++){
            if(ans[i]==0){
                ans[i]=1;
            }
        }

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
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