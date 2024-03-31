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
  int count = 0;
  int left = -1;
  int right = -1;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    if (left == -1 && a != 0)
      left = i;
    if (a != 0)
      right = i;
    if (a == 0)
      count++;
    arr[i] = a;
  }
  if (count == n)
  {
    cout << 0 << endl;
  }
  else if (count == 0)
  {
    cout << 1 << endl;
  }
  else
  {
    for (int i = left; i < right; ++i)
    {
      if (arr[i] == 0)
      {
        cout << 2 << endl;
        return;
      }
    }

    cout << 1 << endl;
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