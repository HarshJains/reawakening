Author : Harsh Jain
Problem Link: https://codeforces.com/problemset/problem/32/B
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	string str, ans;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == '.') {
			ans.append("0");
		}
		else if (str.at(i) == '-' && str.at(i + 1) == '.') {
			ans.append("1");
			i += 1;

		}
		else if (str.at(i) == '-' && str.at(i + 1) == '-') {
			ans.append("2");
			i += 1;
		}
	}
	cout << ans << "\n";
}
