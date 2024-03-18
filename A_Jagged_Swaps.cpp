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
  for (auto &it : arr)
  {
    cin >> it;
  }

  if (arr[0] == 1)
  {
    cout << "YES" << endl;
    return;
  }

  cout << "NO" << endl;
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