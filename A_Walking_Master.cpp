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
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b > d)
  {
    cout << -1 << endl;
    return;
  }

  if (c > a + (d - b))
  {
    cout << -1 << endl;
  }
  else
  {
    int moves = d - b;
    moves += a + d - b - c;
    cout << moves << endl;
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