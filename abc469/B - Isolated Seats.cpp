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
  int n, ans = 0;
  cin >> n;
  string s;
  getString(s);
  if (n == 1) {
    cout << (s[0] == 'x') << endl;
    return;
  }
  for (int i = 0; i < n; i++) {
    if (s[i] == 'o')
      continue;
    if (i == 0)
      ans += ('x' == s[i + 1]);
    if (i == n - 1)
      ans += ('x' == s[i - 1]);
    else
      ans += ('x' == s[i - 1] && 'x' == s[i + 1]);
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
