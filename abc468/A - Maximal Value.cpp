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
	int n, x, ans = 0;
	cin >> n;
	vector<int> arr(n);
	for (auto &i: arr) cin >> i;
	for (int i = 1; i < n - 1; i++) {
		if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) ans++;
	}
	cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
