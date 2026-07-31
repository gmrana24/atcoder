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

void solve() {
  string s;
  getString(s);
  int n = s.length(), ans = 0;
  vector<vector<int>> grid(n, vector<int>(n));
  rep(i, 0, n) {
    int l = i, r = i, c = 0;
    while (l >= 0 && r < n) {
      if (s[l] != s[r])
        c++;
      if (c == 2)
        break;
      ans++;
      l--;
      r++;
    }
    l = i;
    r = i + 1;
    c = 0;
    while (l >= 0 && r < n) {
      if (s[l] != s[r])
        c++;
      if (c == 2)
        break;
      ans++;
      l--;
      r++;
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
