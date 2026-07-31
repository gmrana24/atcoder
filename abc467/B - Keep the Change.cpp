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
  rep(i, 0, n) {
    int a, b;
    string s;
    cin >> a >> b;
    getString(s);
    if (s[0] == 'k')
      ans += b - a;
  }
  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
