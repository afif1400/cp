#include <bits/stdc++.h>

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

  int tents = 0;
  tents = a;

  int remaining = b % 3;
  if (remaining > 0 && c < 3 - remaining)
  {
    cout << -1 << endl;
    return;
  }
  tents += (b + (3 - remaining)) / 3;
  c = c - (3 - remaining);
  tents += c / 3;
  remaining = c % 3;
  if (remaining > 0)
  {
    tents += 1;
  }
  cout << tents << endl;
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
