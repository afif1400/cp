#include <bits/stdc++.h>
#include <iostream>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n";
#define ff first
#define ss second
int maxSubArray(vector<int> &nums)
{
  int maxSum = 0;
  int sum = 0;

  for (int i = 0; i < nums.size(); ++i)
  {

    sum += nums[i];
    sum = max(sum, 0);
    maxSum = max(maxSum, sum);
  }

  return maxSum;
}
void solve()
{
  int n, k;
  cin >> n >> k;
  vector<int> arr(n);
  ll sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
    sum = (sum % 1000000007 + arr[i]) % 1000000007;
  }

  int maxSum = 0;
  int curr = 0;

  for (int i = 0; i < n; ++i)
  {

    curr += arr[i];
    curr = max(curr, 0);
    maxSum = max(maxSum, curr);
  }

  ll pow2k_minus_1 = 1;
  for (int i = 0; i < k; ++i)
  {
    pow2k_minus_1 = (pow2k_minus_1 * 2) % 1000000007;
  }
  pow2k_minus_1 = (pow2k_minus_1 - 1 + 1000000007) % 1000000007;
  sum += pow2k_minus_1 * maxSum;
  cout << ((sum % 1000000007) + 1000000007) % 1000000007 << endl;
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