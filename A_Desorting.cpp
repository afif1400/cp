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
  vector<int> arr(n);
  for (auto &it : arr)
  {
    cin >> it;
  }
  int min_diff = INT_MAX;
  for (int i = 1; i < n; ++i)
  {
    min_diff = min(min_diff, arr[i] - arr[i - 1]);
  }

  if (min_diff == 0)
  {
    cout << 1 << endl;
  }
  else if (min_diff < 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << (min_diff / 2) + 1 << endl;
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