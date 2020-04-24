Author: Harsh Jain
Problem link: https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	int x, indx = 0, indy = 0;

	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> x;
			if (x == 1) {
				indx = i;
				indy = j;
				break;
			}
		}
	}
	cout << abs(indx - 3 ) + abs(indy - 3) << "\n";
}
