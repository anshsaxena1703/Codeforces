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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    if(n<=2) cout<<stoi(s)<<endl;
    else{
        ll ans=INT_MAX;
        for(int i=1;i<n;i++){
            ll num=(s[i]-'0')+(s[i-1]-'0')*10;
            for(int j=0;j<n;j++){
                if(j!=i&&j!=i-1){
                    if(s[j]=='0'){
                        cout<<0<<endl;
                        return;
                    }
                    else{
                        if(s[j]!='1'){
                            num=min(num+(s[j]-'0'),num*(s[j]-'0'));
                        }
                    }
                }
            }
            ans=min(ans,num);
        }
        cout<<ans<<endl;
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
