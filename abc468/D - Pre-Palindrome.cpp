#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)
#define pb push_back
#define all(arr) arr.begin(), arr.end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mp make_pair
#define F first
#define S second

using namespace std;

int palindrome(string &s, int i, int j) {
  int ct = 0;
  while (i <= j) {
    if (s[i] != s[j]) {
      if (ct == 1)
        return 1000;
      ct++;
    }
    i++;
    j--;
  }
  return ct;
}

void solve() {
  string s;
  getString(s);
  int n = s.length(), ans = 0;
  vector<vector<int>> grid(n, vector<int>(n, 1000));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      if (i == 0)
        grid[i][j] = 0;
      else {
        if (i < 2)
          grid[i][j] = palindrome(s, j, j + i);
        else {
          if (grid[i - 2][j + 1] == 0) {
            grid[i][j] = 0;
            if (s[i + j] != s[j])
              grid[i][j] += 1;
          } else if (grid[i - 2][j + 1] == 1) {
            if (s[j] == s[j + i])
              grid[i][j] = 1;
            else
              grid[i][j] = 1000;
          } else
            grid[i][j] = palindrome(s, j, j + i);
        }
      }
      if (grid[i][j] != 1000)
        ans++;
    }
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
