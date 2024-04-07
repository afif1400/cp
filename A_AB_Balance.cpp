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
  string s;
  cin >> s;

  if (s[0] != s[s.length() - 1])
  {
    s[0] = 'a';
    s[s.length() - 1] = 'a';
  }

  cout << s << endl;
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