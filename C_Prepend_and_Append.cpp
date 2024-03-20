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
  string str;
  cin >> str;
  int l = 0;
  int r = n - 1;
  while (l <= r && str[l] != str[r])
  {
    l++;
    r--;
  }

  cout << r - l + 1 << endl;
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