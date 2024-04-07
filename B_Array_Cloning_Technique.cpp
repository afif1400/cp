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
  map<int, int> map;
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
    map[arr[i]]++;
  }

  int maxi = 0;
  for (int i = 0; i < n; ++i)
  {
    maxi = max(maxi, map[arr[i]]);
  }

  int ans = 0;
  while (maxi < n)
  {
    int d = min(n - maxi, maxi);
    ans += d;
    ans++;
    maxi += d;
  }

  cout << ans << endl;
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