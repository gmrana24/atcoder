#include <algorithm>
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
	int n, ans = -1;
	cin >> n;
	vector<int> p(n), q(n);
	for (auto &i: p) cin >> i;
	for (auto &i: q) cin >> i;
	if (p >= q ) {
		cout << 0 << endl;
		return;
	}
	while (p < q) {
		ans++;
		next_permutation(p.begin(), p.end());
	}
	cout << ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
