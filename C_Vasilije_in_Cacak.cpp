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
  ll n, k, x;
  cin >> n >> k >> x;
  ll min_sum = k * (k + 1) / 2;
  ll max_sum = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
  if (x >= min_sum && x <= max_sum)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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