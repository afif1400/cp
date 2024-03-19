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
  vector<int> res;
  for (auto &it : arr)
  {
    cin >> it;
  }
  res.push_back(arr[0]);
  for (int i = 1; i < n; ++i)
  {
    if (arr[i] < arr[i - 1])
    {
      res.push_back(arr[i]);
    }
    res.push_back(arr[i]);
  }
  cout << res.size() << endl;
  for (int a : res)
  {
    cout << a << " ";
  }
  cout << endl;
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
