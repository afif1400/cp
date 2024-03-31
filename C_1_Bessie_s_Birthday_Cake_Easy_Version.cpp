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
  int n, x, y;
  cin >> n >> x >> y;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
  }
  int remaining = n - x;

  int max_triangles = min(remaining, y) + 1;

  cout << max_triangles << endl;
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