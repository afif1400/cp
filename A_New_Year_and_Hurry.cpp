#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second

//? brute force
// void solve()
// {
//   int n, k;
//   cin >> n >> k;
//   int total = 240 - k;
//   int sum = 0;
//   int count = 0;
//   for (int i = 1; i <= n; ++i)
//   {
//     sum += 5 * i;
//     if (sum <= total)
//       count++;
//     else
//       break;
//   }

//   cout << count << endl;
// }

void solve()
{
  int n, k;
  cin >> n >> k;

  int l = 0;
  int r = n;
  int result = 0;
  int totalTime = 0;
  while (l <= r)
  {
    int mid = l + (r - l) / 2;
    totalTime += 5 * mid;
    if (totalTime + k <= 240)
    {
      result = mid;
      l = mid + 1;
    }
    else
    {
      r = mid - 1;
    }
  }

  cout << result << endl;
}

int main()
{
  int T = 1;
  // cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}
