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
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
  }

  if (n % 2 == 0)
  {
    cout << 2 << endl;
    cout << 1 << " " << n << endl;
    cout << 1 << " " << n << endl;
  }
  else
  {
    cout << 4 << endl;
    cout << 1 << " " << n - 1 << endl;
    cout << 1 << " " << n - 1 << endl;
    cout << n - 1 << " " << n << endl;
    cout << n - 1 << " " << n << endl;
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