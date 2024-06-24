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
    ll n,k;
    cin>>n>>k;
    vector<ll> a;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        a.pb(x);
    }
    sort(a.begin(),a.end());
    map<ll,vector<ll>> mp;
    for(int i=0;i<n;i++){
        mp[a[i]%k].pb(a[i]);
    }
    if(n%2==0){
        ll ans=0;
        for(auto it:mp){
            if(it.second.size()%2==1){
                cout<<-1<<endl;
                return;
            }
            for(int i=0;i<it.second.size()-1;i++){
                ans+=(it.second[i+1]-it.second[i])/k;
                i++;
            }
        }
        cout<<ans<<endl;
    }
    else{
        bool flag=false;
        ll ans=0;
        vector<ll> b;
        for(auto it:mp){
            if(it.second.size()%2==1){
                if(flag==true){
                    cout<<-1<<endl;
                    return;
                }
                flag=true;
                for(int i=0;i<it.second.size();i++){
                    b.pb(it.second[i]);
                }
            }
            else{
                for(int i=0;i<it.second.size()-1;i++){
                    ans+=(it.second[i+1]-it.second[i])/k;
                    i++;
                }
            }
        }
        if(b.size()!=1){
            ll lov=0,lov1=0;
            vector<ll> dp(b.size(),0);
            dp[1]=b[1]-b[0];
            for(int i=3;i<b.size();i+=2){
                dp[i]=dp[i-2]+b[i]-b[i-1];
            }
            /*cout<<"\n extra \n";
            //prnt(b);
            prnt(dp);*/
            vector<ll> dp2(b.size()+7,0);
            dp2[b.size()-2]=b[b.size()-1]-b[b.size()-2];
            for(int i=b.size()-4;i>0;i-=2){
                dp2[i]=dp2[i+2]+b[i+1]-b[i];
            }
            /*prnt(dp2);
            cout<<"\n";*/
            ll localans=INT_MAX;
            for(int i=0;i<b.size();i++){
                if(i==0){
                    localans=min(localans,dp2[1]);
                }
                else if(i==b.size()-1){
                    localans=min(localans,dp[i-1]);
                }
                else if(i%2==0){
                    localans=min(localans,dp2[i+1]+dp[i-1]);
                }
                else{
                    if(i==1){
                        if(b.size()==3) localans=min(localans,b[i+1]-b[i-1]);
                        else{
                            localans=min(localans,b[i+1]-b[i-1]+dp2[i+2]);
                        }
                    }
                    else{
                        localans=min(localans,b[i+1]-b[i-1]+dp2[i+2]+dp[i-2]);
                    }
                }
            }
            //deb(localans);
            ans+=(localans/k);
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