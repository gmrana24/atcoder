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
  int h, w;
  cin >> h >> w;
  w *= 10000;
  if (w / (h * h) < 25)
    cout << "No";
  else
    cout << "Yes";
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--)
    solve();
  return 0;
}
