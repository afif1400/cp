#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

const string endings[] = {"00", "25", "50", "75"};

void solve()
{

  string s;
  cin >> s;
  int ans = 100;
  for (auto end : endings)
  {
    int count = 0;
    int t = s.length() - 1;
    while (t >= 0 && s[t] != end[1])
    {
      t--;
      count++;
    }

    t--;

    while (t >= 0 && s[t] != end[0])
    {
      count++;
      t--;
    }

    ans = min(ans, count);
  }

  cout << ans << endl;
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