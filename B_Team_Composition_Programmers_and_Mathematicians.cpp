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
  int a, b;
  cin >> a >> b;
  if (a == b)
  {
    int teams = (a + b) / 4;
    cout << teams << endl;
    return;
  }

  if (a == 0 || b == 0)
  {
    cout << 0 << endl;
    return;
  }

  int initialTeams = 0;
  int teams = 0;
  if (b < a)
    swap(a, b);
  initialTeams = a;
  b = b - a;

  int t = b / 2;
  if (t >= initialTeams)
  {
    teams += initialTeams;
    initialTeams = 0;
  }
  else
  {
    teams += t;
    initialTeams -= t;
  }

  if (initialTeams > 0)
  {
    teams += initialTeams / 2;
  }

  cout << teams << endl;
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
