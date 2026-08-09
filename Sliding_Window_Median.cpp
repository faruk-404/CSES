#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define nf cout << '\n'
#define int long long
#define cy cout << "YES\n"
#define cn cout << "NO\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    pbds<pair<int, int>> pb;
    for (int i = 0; i < k; i++) {
        pb.insert({a[i], i});
    }
    vector<int> ans;
    auto x = pb.find_by_order((k - 1) / 2);
    ans.push_back(x->first);
    for (int i = k; i < n; i++) {
        pb.insert({a[i], i});
        pb.erase({a[i - k], (i - k)});
        x = pb.find_by_order((k - 1) / 2);
        ans.push_back(x->first);
    }
    for (auto i : ans)
        cout << i << ' ';
    cout << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}