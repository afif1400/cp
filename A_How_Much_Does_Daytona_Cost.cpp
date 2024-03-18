#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> arr(n, 0);
  map<int, int> map;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    arr[i] = a;
    map[a]++;
  }

  if (map[k] >= 1)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
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