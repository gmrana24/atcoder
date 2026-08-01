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
  int n, m, ans = 0;
  cin >> n >> m;
  vector<pair<int, int>> arr(m);
  map<int, set<int>> map;
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    arr[i] = mp(a, b);
    map[a].insert(i);
    map[b].insert(i);
  }
  rep(i, 1, n + 1) {
    auto seen = map[i];
    int x = -1, y = -1;
    bool fx = true, fy = true;
    rep(j, 0, m) {
      if (seen.count(j))
        continue;
      auto cur = arr[j];
      if (x == -1)
        x = cur.F;
      else {
        if (x != cur.F && x != cur.S)
          fx = false;
      }
      if (y == -1)
        y = cur.S;
      else {
        if (y != cur.F && y != cur.S)
          fy = false;
      }
      if (!fx && !fy)
        break;
    }
    if (fx)
      ans++;
    if (fy)
      ans++;
  }
  cout << ans / 2 << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
