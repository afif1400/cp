#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

bool check(string s, string x)
{
  int M = s.length();
  int N = x.length();
  for (int i = 0; i <= N - M; i++)
  {
    int j;
    for (j = 0; j < M; j++)
      if (s[i + j] != x[j])
        break;

    if (j == M)
      return true;
  }

  return false;
}

void solve()
{
  int s, x;
  cin >> s >> x;
  string sstr;
  string xstr;
  int count = -1;
  for (int i = 0; i <= 5; ++i)
  {
    string temp = sstr;
    for (int j = 0; j < i; ++j)
    {
      temp += temp;
    }

    if (check(temp, xstr))
    {
      count = i;
      break;
    }
  }

  cout << count << endl;
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