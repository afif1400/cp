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
  int a, b, c;
  cin >> a >> b >> c;
  int numAnna = a;
  int numKatie = b;

  if (c % 2 == 0)
  {
    numAnna += c / 2;
    numKatie += c / 2;
  }
  else
  {
    numAnna += c / 2 + 1;
    numKatie += c / 2;
  }

  if (numAnna > numKatie)
  {
    cout << "First" << endl;
  }
  else
  {
    cout << "Second" << endl;
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