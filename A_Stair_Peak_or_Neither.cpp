#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

// A stair satisfies the condition 𝑎<𝑏<𝑐
// .
// A peak satisfies the condition 𝑎<𝑏>𝑐
// .

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;
  if (a < b && b < c)
  {
    cout << "STAIR" << endl;
    return;
  }

  if (a < b && b > c)
  {
    cout << "PEAK" << endl;
    return;
  }

  cout << "NONE" << endl;
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