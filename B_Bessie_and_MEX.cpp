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

  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  ll sum = 0;
  for (int i = 0; i < n; ++i)
  {
    if (arr[i] > 0)
    {
      cout << sum << " ";
      sum += arr[i];
    }
    else
    {
      cout << sum - arr[i] << " ";
    }
  }
  cout << endl;
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