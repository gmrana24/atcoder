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
#define mnx(a, b) min(a, b), max(a, b)

using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  set<pair<int, int>> ans;
  rep(i, 0, m) { cin >> a[i] >> b[i]; }
  rep(i, 0, 2) {
    int x = a[0], idx = 0;
    while (idx < m && (a[idx] == x || b[idx] == x))
      idx++;
    if (idx != m) {
      rep(j, 0, 2) {
        int y = a[idx], c = idx;
        while (c < m) {
          if (y != a[c] && y != b[c] && x != a[c] && x != b[c])
            break;
          c++;
        }
        if (c == m)
          ans.insert(mp(mnx(x, y)));
        swap(a[idx], b[idx]);
      }
    } else {
      rep(j, 1, n + 1) {
        if (j != x)
          ans.insert(mp(mnx(j, x)));
      }
    }
    swap(a[0], b[0]);
  }
  cout << ans.size() << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
