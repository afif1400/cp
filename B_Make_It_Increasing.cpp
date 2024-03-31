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
  int total = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  if (n == 1)
  {
    cout << 0 << endl;
    return;
  }

  for (int i = 0; i < n - 1; ++i)
  {
    int count = 0;

    while (arr[i] >= arr[i + 1] && arr[i + 1] != 0)
    {
      arr[i] /= 2;
      count++;
    }

    total += count;
  }

  for (int i = n - 1; i > 0; --i)
  {
    int count = 0;

    while (arr[i] <= arr[i - 1] && arr[i] != 0)
    {
      arr[i - 1] /= 2;
      count++;
    }
    total += count;
  }

  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i] >= arr[i + 1])
    {
      cout << -1 << endl;
      return;
    }
  }

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