#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

int gcd_helper(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  int gcd = arr[0];
  bool flag = true;
  for (int i = 1; i < n; ++i)
  {
    gcd = gcd_helper(arr[i], gcd);
    if (gcd > i)
    {
      flag = false;
    }
  }

  if (gcd > n)
  {
    cout << "No" << endl;
    return;
  }

  if (gcd <= n && flag)
  {
    cout << "Yes" << endl;
    return;
  }

  if (gcd <= n && !flag)
  {
    int flag = false;
    for (int i = 0; i < n; ++i)
    {
      for (int j = i + 1; j < n; ++j)
      {
        int gcd = gcd_helper(arr[i], arr[j]);
        if (gcd <= 2)
        {
          flag = true;
          break;
        }
      }
      if (flag)
        break;
    }
    if (flag)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
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