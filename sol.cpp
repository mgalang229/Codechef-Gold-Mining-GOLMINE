#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);                         
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<double> g(n), a(n), b(n);
		for (int i = 0; i < n; i++) {
			cin >> g[i] >> a[i] >> b[i];
		}
		double chef_total = 0;
		double chefu_total = 0;
		for (int i = 0; i < n; i++) {    
			// calculate gold per hour (for Chef and Chefu)
  		double chef = (g[i] / a[i]) / 24;
  		double chefu = (g[i] / b[i]) / 24;
			// calculate the total hours to mine all the gold if they mine at the same time
  		double combined = chef + chefu;
  		double total_hrs = g[i] / combined;
  		// calculate the total gold that each of them will be able to mine
  		chef_total += (chef * total_hrs);
  		chefu_total += (chefu * total_hrs);
  	}
  	// note: don't forget to print 5 decimal places
		cout << fixed << setprecision(5) << chef_total << " " << chefu_total << '\n';
	}
	return 0;
}