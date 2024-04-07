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
  int a, b, c;
  cin >> a >> b >> c;
  if (b - a == c - b)
  {
    cout << "YES" << endl;
    return;
  }

  if ((a + c) % (2 * b) == 0)
  {
    cout << "YES" << endl;
    return;
  }

  if ((2 * b - a) > 0 && (2 * b - a) % c == 0)
  {
    cout << "YES" << endl;
    return;
  }

  if ((2 * b - c) > 0 && (2 * b - c) % a == 0)
  {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
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