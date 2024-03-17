#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  ll n;
  ll sum = 0;
  cin >> n;
  while (n--)
  {
    ll a;
    cin >> a;
    sum += a;
  }
  ll l = 1;
  ll r = sqrt(sum);
  while (l <= r)
  {
    ll mid = l + (r - l) / 2;
    if (mid * mid == sum)
    {
      cout << "YES" << endl;
      return;
    }
    if (mid * mid < sum)
      l = mid + 1;
    else
      r = mid - 1;
  }

  cout << "NO" << endl;
}

int main()
{
  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
