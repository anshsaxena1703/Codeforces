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
  ll cnt=0;
  string s1="mapie";
  while(s.find(s1)!=string::npos){
    s[s.find(s1)+2]='a';
    cnt++;
  }
  for(int i=1;i<n-1;i++){
    if(s[i]=='a' || s[i]=='i'){
        if(s[i]=='a'){
            if(s[i-1]=='m' && s[i+1]=='p') cnt++;
        }
        if(s[i]=='i'){
            if(s[i-1]=='p' && s[i+1]=='e') cnt++;
        }
    }
  }
  cout<<cnt<<endl;
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