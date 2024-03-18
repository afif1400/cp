#include <bits/stdc++.h>

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
  vector<int> arr(n);
  map<int, int> map;
  for (int i = 0; i < n; ++i)
  {
    int a;
    cin >> a;
    arr[i] = a;
    map[a]++;
  }

  if (map.size() == 1)
  {
    cout << "Yes" << endl;
    return;
  }

  if (map.size() >= 3)
  {
    cout << "No" << endl;
    return;
  }

  if (abs(map.begin()->second - map.rbegin()->second) <= 1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
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
