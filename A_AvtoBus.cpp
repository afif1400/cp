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
  ll n;
  cin >> n;

  if (n % 2ll == 1 || n < 4)
  {
    cout << -1 << endl;
    return;
  }

  int remaining = n % 6ll;
  if (remaining == 2)
  {
    cout << ((n - remaining) / 6ll) + 1 << " ";
  }
  else if (remaining == 4)
  {
    cout << ((n) / 6ll) + 1 << " ";
  }
  else
  {
    cout << n / 6ll << " ";
  }
  cout << n / 4ll << endl;
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