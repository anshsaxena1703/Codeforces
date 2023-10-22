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
    vector<ll> ans;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
        }
    }
    vector<ll> b;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            b.pb(i);
        }
    }
    for(int i=1;i<=n;i++){
        if(cnt>n-i){
            ans.pb(-1);
        }
        else{
            ll cnt2=0;
            
            if(s[n-i]=='1'){
                cnt2+=n-i-b.back();
                s[b.back()]='1';
                s[n-i]='0';
                b.pop_back();
            }
            else{
                if(n-i<=b.back()){
                    b.pop_back();
                }
            }

            if(ans.size()!=0)cnt2+=ans.back();
            ans.pb(cnt2);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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