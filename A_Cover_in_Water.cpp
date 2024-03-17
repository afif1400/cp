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
  string s;
  for (int i = 0; i < n; ++i)
  {
    char c;
    cin >> c;
    s.push_back(c);
  }

  int count = 0;
  int total = 0;
  int dots = 0;
  for (int i = 0; i < n; ++i)
  {
    if (s[i] == '.')
    {
      total++;
      count++;
    }
    else if (s[i] == '#')
    {
      count = 0;
    }
    if (count == 3)
    {
      cout << 2 << endl;
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