#include <bits/stdc++.h>
using namespace std;

// shortcuts
#define ll long long
#define mx 1e18
#define mn INT_MIN

// ~~~~~~~~~~~~~~~~~~
ll ok(string &str, ll n, ll mid)
{
  ll cnt = 0;
  for (ll i = 0; i < mid; i++)
  {
    ll mxi = 0, total = 0;
    vector<ll> hash(26, 0);
    for (ll j = i; j < n; j += mid)
    {
      hash[str[j] - 'a'] += 1;
      mxi = max(mxi, hash[str[j] - 'a']);
      total += 1;
    }
    cnt += (total - mxi);
  }
  return cnt <= 1;
}
void ok()
{
  ll n;
  cin >> n;
  string str;
  cin >> str;

  ll ans = n;
  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      if (ok(str, n, i))
        ans = min(ans, i);
      if (ok(str, n, n / i))
        ans = min(ans, n / i);
    }
  }
  cout << ans << endl;
}

int main()
{

  ll t = 1;
  cin >> t;
  for (ll i = 1; i <= t; i++)
  {
    ok();
  }
  return 0;
}