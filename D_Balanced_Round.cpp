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
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  int count = 1;
  int max_count = 1;
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i + 1] - arr[i] <= k)
    {
      count++;
    }
    else
    {
      count = 1;
    }
    max_count = max(max_count, count);
  }
  cout << n - max_count << endl;
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