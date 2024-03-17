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
  int n, x;
  cin >> n >> x;

  int arr[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  int max_diff = arr[0];
  for (int i = 0; i < n - 1; ++i)
  {
    max_diff = max(max_diff, arr[i + 1] - arr[i]);
  }
  max_diff = max(max_diff, 2 * (x - arr[n - 1]));
  cout << max_diff << endl;
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