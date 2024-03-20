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

  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    arr[i] = a;
  }

  int x = arr[0];
  for (int i = 1; i < n; ++i)
  {
    x = x ^ arr[i];
  }
  if (x != 0 && n % 2 == 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << x << endl;
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