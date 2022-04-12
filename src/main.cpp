#include <iostream>
#include <map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	while (0 < n--) {
		int t;
		cin >> t;

		auto m = map<ll, ll>{};
		auto idx = ll{ -1 };
		for (int i = 0; i < t; ++i) {
			ll x;
			cin >> x;

			m[x] += 1;
			if (t / 2 < m[x]) {
				idx = x;
			}
		}

		if (-1 == idx) {
			cout << "SYJKGW\n";
		}
		else {
			cout << idx << '\n';
		}
	}

	return 0;
}