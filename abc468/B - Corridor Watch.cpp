#include <bits/stdc++.h>

#define ll long long
#define pq priority_queue
#define getString(n) getline(cin >> ws, n)
#define pb push_back
#define all(arr) arr.begin(), arr.end()
#define rep(i, a, b) for (i = a; i < b; i++)
#define mp make_pair
#define F first
#define S second

using namespace std;

void solve() {
  int m, d, ans = 0;
  cin >> m >> d;
  string s;
  getString(s);
  vector<int> arr(m);
  int i;
  rep(i, 0, m) {
		if (s[i] == '.') continue;
    int start = max(i - d, 0), end = min(m - 1, i + d);
		for (int j = start; j <= end; j++) arr[j] = 1;
  }
	for (int i: arr) {
		if (i == 0) ans++;
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
