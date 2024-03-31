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
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  if (n % 2 == 0)
  {
    int index = (n / 2) - 1;
    // int median = arr[index];
    int count = 1;
    while (index < (n - 1) && arr[index] == arr[index + 1])
    {
      count++;
      index++;
    }
    cout << count << endl;
  }
  else
  {
    int index = (n / 2);
    // median = arr[index];
    int count = 1;
    while (index < (n - 1) && arr[index] == arr[index + 1])
    {
      count++;
      index++;
    }
    cout << count << endl;
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