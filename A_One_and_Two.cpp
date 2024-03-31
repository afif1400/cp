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
  int arr[n];
  ld prod = 1;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    prod *= a;
    arr[i] = a;
  }

  ld curr = 1;
  for (int i = 0; i < n; ++i)
  {
    curr *= arr[i];
    if (curr == (prod / curr))
    {
      cout << i + 1 << endl;
      return;
    }
  }

  cout << -1 << endl;
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