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
  if (n % 2 == 1)
  {
    cout << 1 << endl;
  }
  else
  {
    int i = 1;
    int count = 0;
    while (n % i == 0)
    {
      count++;
      i++;
    }
    cout << i - 1 << endl;
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