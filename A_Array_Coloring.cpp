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
  int sum = 0;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    sum += a;
  }

  if (sum % 2 == 0)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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