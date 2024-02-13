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
  int n;
  cin>>n;
  string ans="";
  char c='a';
  for(int i=1;i<=26;i++){
    if(n-i<=52){
        ans+=c;
        n-=i;
        break;
    }
    else{
        c++;
    }
  }
  c='a';
  for(int i=1;i<=26;i++){
    if(n-i<=26){
        ans+=c;
        n-=i;
        break;
    }
    else{
        c++;
    }
  }
  c='a';
  for(int i=1;i<=26;i++){
    if(n-i<=0){
        ans+=c;
        n-=i;
        break;
    }
    else{
        c++;
    }
  }
  cout<<ans<<endl;
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