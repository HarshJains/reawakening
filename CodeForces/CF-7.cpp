Author : Harsh Jain
Problem  Link:http://codeforces.com/problemset/problem/59/A
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	int lowm = 0, upm = 0;
	char c;
	string ip;
	cin >> ip;
	for (int i = 0; i < ip.length(); i++) {
		c = ip[i];
		if (isupper(c)) {
			upm += 1;
		}
		else if (islower(c)) {
			lowm += 1;
		}
	}
	if (upm > lowm) {
		transform(ip.begin(), ip.end(), ip.begin(), ::toupper);
		cout << ip;
	}
	else if (lowm > upm || lowm == upm) {
		transform(ip.begin(), ip.end(), ip.begin(), ::tolower);
		cout << ip;
	}
}
