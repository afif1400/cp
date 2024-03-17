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
  int arr[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }

  int index = 0;
  bool isSorted = true;
  for (int i = 0; i < n - 1; ++i)
  {
    if (arr[i] > arr[i + 1])
    {
      isSorted = false;
      break;
    }
  }

  if (isSorted || k > 1)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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