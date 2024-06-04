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
        cin >> n;
        vector<ll> a;
        for (int i = 0; i < n; ++i) {
            ll x;
            cin>>x;
            a.pb(x);
        }

        vector<int> b;
        for (int i = 0; i < n - 1; ++i) {
            b.pb(__gcd(a[i], a[i + 1]));
        }

        ll id = -1;
        for (int i = 0; i < n - 2; ++i) {
            if (b[i] > b[i + 1]) {
                id = i;
                break;
            }
        }

        if (id == -1) {
            cout << "YES" << endl;
            return;
        }

        vector<ll> a1, a2, a3;
        for (int i = 0; i < n; ++i) {
            if (i != id + 1) a1.pb(a[i]);
            if (i != id + 2) a2.pb(a[i]);
            if (i != id) a3.pb(a[i]);
        }

        vector<int> b1(n - 2), b2(n - 2), b3(n - 2);
        for (int i = 0; i < n - 2; ++i) {
            b1[i] = __gcd(a1[i], a1[i + 1]);
            b2[i] = __gcd(a2[i], a2[i + 1]);
            b3[i] = __gcd(a3[i], a3[i + 1]);
        }
        bool flag1=true,flag2=true,flag3=true;
        for (int i = 0; i < b1.size() - 1; ++i) {
            if (b1[i] > b1[i + 1]) {
                flag1=false;
                break;
            }
        }
        for (int i = 0; i < b2.size() - 1; ++i) {
            if (b2[i] > b2[i + 1]) {
                flag2=false;
                break;
            }
        }
        for (int i = 0; i < b3.size() - 1; ++i) {
            if (b3[i] > b3[i + 1]) {
                flag3=false;
                break;
            }
        }

        if ((flag1 || flag2 || flag3)==false) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
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