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

  for (int i = 0; i < 2 * n; ++i)
  {
    for (int j = 0; j < 2 * n; ++j)
    {
      if ((i / 2) % 2 == 0)
      {
        if ((j / 2) % 2 == 0)
        {
          cout << "#";
        }
        else
        {
          cout << ".";
        }
      }
      else
      {
        if ((j / 2) % 2 == 0)
        {
          cout << ".";
        }
        else
        {
          cout << "#";
        }
      }
    }
    cout << endl;
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