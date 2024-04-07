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
  ll sum = 0;
  bool has_one = false;
  int zeros = 0;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    if (a == 1)
      has_one = true;
    if (a == 0)
      zeros++;
    arr[i] = a;
    sum += a;
  }
  if (!has_one)
  {
    cout << 0 << endl;
    return;
  }

  if (zeros == 0)
  {
    cout << 1 << endl;
    return;
  }

  if (sum == 1)
  {
    cout << n << endl;
    return;
  }
  cout << n - 1 << endl;
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