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
  ll a, b, n;
  cin >> a >> b >> n;
  ll sum = 0;
  for (int i = 0; i < n; ++i)
  {
    int x;
    cin >> x;
    if (x < a)
    {
      sum += x;
    }
    else
    {
      sum += a - 1;
    }
  }
  sum += b;
  cout << sum << endl;
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