#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
vl dat;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  dat = vl(5);
  auto ans = ll{0};
  while (0 < (n--)) {
    ll x, y;
    cin >> x >> y;
    for (auto&& v : dat) {
      cin >> v;
    }
    sort(dat.rbegin(), dat.rend());

    const auto& now = max(x, y) + dat[0] + dat[1];
    ans = max(ans, now);
  }

  cout << ans;

  return 0;
}