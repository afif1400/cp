#include <bits/stdc++.h>

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
  int mini = INT_MAX;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    mini = min(mini, abs(a));
  }

  cout << mini << endl;
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