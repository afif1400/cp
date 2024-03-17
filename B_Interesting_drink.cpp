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
  int n;
  cin >> n;
  int prices[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> prices[i];
  }
  sort(prices, prices + n);
  int q;
  cin >> q;
  while (q--)
  {
    int coins;
    cin >> coins;

    int lo = 0;
    int hi = n - 1;

    while (hi - lo > 1)
    {
      int mid = lo + (hi - lo) / 2;
      if (prices[mid] <= coins)
      {
        lo = mid + 1;
      }
      else
      {
        hi = mid;
      }
    }

    if (prices[lo] > coins)
    {
      cout << lo << endl;
    }
    else if (prices[hi] > coins)
    {
      cout << hi << endl;
    }
    else
    {
      cout << n << endl;
    }
  }
}

int main()
{
  int T = 1;
  // cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}