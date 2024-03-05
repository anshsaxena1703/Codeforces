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
  ll start=0,end=s.length()-1;
  while(s[start]==s[end]){
    start++;
    end--;
  }
  if(start>s.length()/2){
    cout<<s<<endl;
    return;
  }

  if(s[start]-'0'>s[end]-'0'){
    reverse(s.begin(),s.end());
    n--;
    if(n%2==0){
        string s1=s;
        cout<<s1<<endl;
        return;
    }
    else{
        string s1=s;
        reverse(s.begin(),s.end());
        s1+=s;
        cout<<s1<<endl;
        return;
    }
  }
  else{
    if(n%2==0){
        string s1=s;
        cout<<s1<<endl;
        return;
    }
    else{
        string s1=s;
        reverse(s.begin(),s.end());
        s1+=s;
        cout<<s1<<endl;
        return;
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