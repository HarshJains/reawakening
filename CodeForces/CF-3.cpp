Author: Harsh Jain
Problem  Link: https://codeforces.com/problemset/problem/266/B
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	int size, time;
	cin >> size >> time;
	char x[size];
	for (int i = 0; i < size; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < time; i++) {
		for (int j = 0; j < size; j++) {
			if (x[j] == 'B' && x[j + 1] == 'G') {
				x[j] = 'G';
				x[j + 1] = 'B';
				j += 1;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << x[i];
	}
}
