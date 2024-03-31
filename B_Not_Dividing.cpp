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
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i] == 1)
    {
      arr[i]++;
    }
    if (arr[i + 1] == 1)
    {
      arr[i + 1]++;
    }
    if (arr[i + 1] % arr[i] == 0)
    {
      arr[i + 1]++;
    }
  }
  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i] == 1)
    {
      arr[i]++;
    }
    if (arr[i + 1] == 1)
    {
      arr[i + 1]++;
    }
    if (arr[i + 1] % arr[i] == 0)
    {
      arr[i + 1]++;
    }
  }
  for (int i = 0; i < n; ++i)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
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