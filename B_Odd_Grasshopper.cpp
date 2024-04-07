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
  ll n, x, i, y, z = 0;
  cin >> x >> n;
  y = n % 4;
  if (y == 1)
    z = -n;
  else if (y == 2)
    z = 1;
  else if (y == 3)
    z = n + 1;
  if (x & 1)
  {
    cout << x - z << endl;
  }
  else
  {
    cout << x + z << endl;
  }
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