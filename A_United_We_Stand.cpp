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
  vector<int> b;
  vector<int> c;
  int maxi = INT_MIN;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    maxi = max(maxi, a);
    arr[i] = a;
  }

  for (int i = 0; i < n; ++i)
  {
    if (arr[i] == maxi)
    {
      c.push_back(arr[i]);
    }
    else
    {
      b.push_back(arr[i]);
    }
  }

  if (b.size() == 0)
  {
    cout << -1 << endl;
    return;
  }

  cout << b.size() << " " << c.size() << endl;
  for (int i = 0; i < b.size(); ++i)
  {
    cout << b[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < c.size(); ++i)
  {
    cout << c[i] << " ";
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