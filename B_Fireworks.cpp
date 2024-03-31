#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  ll a, b, m;
  cin >> a >> b >> m;
  ll total = 0;
  if (a > b)
    swap(a, b);
  total = ((a + m) / a) + ((b + m) / b);
  cout << total << endl;
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
