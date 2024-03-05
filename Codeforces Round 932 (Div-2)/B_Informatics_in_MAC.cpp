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
  vector<ll> a,b;
  map<ll,ll> mp;
  ll mini=0;
  for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    a.pb(x);
    mp[x]++;
  }

  b=a;
  sort(b.begin(),b.end());
  for(int i=0;i<n;i++){
    if(b[i]==mini) mini++;
  }
  if(mini==0){
    cout<<n<<endl;
    for(int i=1;i<=n;i++){
        cout<<i <<" "<<i<<endl;
    }
  }
  else{

    if(mp[0]==1){
        cout<<-1<<endl;
    }
    
    else{
        set<ll> st,st2;
        vector<pair<ll,ll>> ans;
        ll x1=0,x2=-1;
        for(int i=0;i<n;i++){
            if(a[i]<mini){
                st.insert(a[i]);
                x2++;
                if(st.size()==mini){
                    ans.pb({x1+1,x2+1});
                    x1=x2+1;
                    st.clear();
                    st2.clear();
                }
            }
            else{
                x2++;
                st2.insert(a[i]);
            }
        }
        if(st2.size()!=0 || st.size()!=0){
            if((ans.size()==1 && st2.size()!=0)){
                cout<<-1<<endl;
                return;
            }
            else{
                if(ans.size()==1){
                    cout<<-1<<endl;
                    return;
                }
                ans.back().second=n;
            }
        }
        if(ans.size()==1){
            cout<<-1<<endl;
            return;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
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