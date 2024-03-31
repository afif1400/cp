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
  int n, k;
  cin >> n >> k;

  if (n == k)
  {
    for (int i = 0; i < n; ++i)
    {
      cout << 1 << " ";
    }
    cout << endl;
    return;
  }

  if (k == 1)
  {
    cout << n << " ";
    for (int i = 1; i < n; ++i)
    {
      cout << 1 << " ";
    }
    cout << endl;
  }
  else
  {
    cout << -1 << endl;
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