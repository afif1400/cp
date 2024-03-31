// Given the time in 24-hour format, output the equivalent time in 12-hour format.

// 24-hour format divides the day into 24 hours from 00
//  to 23
// , each of which has 60 minutes from 00
//  to 59
// .
// 12-hour format divides the day into two halves: the first half is AM
// , and the second half is PM
// . In each half, the hours are numbered in the order 12,01,02,03,…,11
// . Each hour has 60 minutes numbered from 00
//  to 59
// .
// Input
// The first line contains a single integer 𝑡
//  (1≤𝑡≤1440
// ) — the number of test cases.

// The only line of each test case contains a string 𝑠
//  of length 5
//  with format hh:mm representing a valid time in the 24-hour format. hh represents the hour from 00
//  to 23
// , and mm represents the minute from 00
//  to 59
// .

// The input will always be a valid time in 24-hour format.

// Output
// For each test case, output two strings separated by a space ("hh:mm AM" or "hh:mm PM"), which are the 12-hour equivalent to the time provided in the test case (without quotes).

// You should output the time exactly as indicated; in particular, you should not remove leading zeroes.

// Example
// inputCopy
// 11
// 09:41
// 18:06
// 12:14
// 00:59
// 00:00
// 14:34
// 01:01
// 19:07
// 11:59
// 12:00
// 21:37
// outputCopy
// 09:41 AM
// 06:06 PM
// 12:14 PM
// 12:59 AM
// 12:00 AM
// 02:34 PM
// 01:01 AM
// 07:07 PM
// 11:59 AM
// 12:00 PM
// 09:37 PM

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
  string s;
  cin >> s;

  int h = stoi(s.substr(0, 2));
  int m = stoi(s.substr(3, 2));

  if (h == 0)
  {
    cout << "12";
  }
  else if (h <= 12)
  {

    if (h < 10)
    {
      cout << 0;
    }
    cout << h;
  }
  else
  {
    if (h - 12 < 10)
    {
      cout << 0;
    }
    cout << h - 12;
  }

  cout << ":";

  if (m < 10)
  {
    cout << "0";
  }

  cout << m;

  if (h < 12)
  {
    cout << " AM";
  }
  else
  {
    cout << " PM";
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