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
  ll n,m,x;
  cin>>n>>m>>x;
  set<ll> ans;
  ans.insert(x);
  for(int i=0;i<m;i++){
    ll a;
    cin>>a;
    char c;
    cin>>c;
    set<ll> st;
    for(auto it:ans){
        if(c=='0'){
            ll p=it+a;
            p=p%n;
            if(p==0){
                p=n;
            }
            st.insert(p);
        }
        else if(c=='1'){
            ll p=it+n-a;
            p=p%n;
            if(p==0) p=n;
            st.insert(p);
        }
        else{
            ll p1=it+a;
            ll p2=it+n-a;
            p1=p1%n;
            p2=p2%n;
            if(p1==0) p1=n;
            if(p2==0) p2=n;
            st.insert(p1);
            st.insert(p2);
        }
    }
    ans=st;
  }
  cout<<ans.size()<<endl;
  for(auto it:ans){
    cout<<it<<" ";
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