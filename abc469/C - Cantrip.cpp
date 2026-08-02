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
  int n;
  cin >> n;
  string s;
  getString(s);
  vector<int> arr(n);
  arr[0] = s[0] == 'o';
  rep(i, 1, n) {
    if (s[i] == 'o')
      arr[i] += 1;
    arr[i] += arr[i - 1];
  }
  rep(i, 0, n) {
    int l = arr[i] + i, p = i;
    while (l < n && arr[p] != arr[l]) {
      int t = l;
      l += arr[l] - arr[p];
      p = t;
    }
    cout << min(l + 1, n) << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
