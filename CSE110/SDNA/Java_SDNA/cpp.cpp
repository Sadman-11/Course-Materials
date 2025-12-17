/*
        author: Sadman-11
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl '\n'
void solve() {
  string num; cin >> num;
  int original = stoi(num);
  int sqrtVal = sqrt(original);
  if (sqrtVal * sqrtVal != original) {
    cout << -1 << nl;
    return;
  }
  for (int a = 0; a <= sqrtVal; a++) {
    int b = sqrtVal - a;
    if (b >= 0) {
      cout << a << " " << b << nl;
      return;
    }
  }
  cout << -1 << nl;
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
