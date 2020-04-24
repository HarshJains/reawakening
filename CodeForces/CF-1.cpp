/*Author: Harsh Jain
Problem Link: https://codeforces.com/problemset/problem/69/A
*/
#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin >> n;
	int x = 0, y = 0, z = 0;
	int tempx, tempy, tempz;
	while (n--) {
		cin >> tempx >> tempy >> tempz;
		x += tempx;
		y += tempy;
		z += tempz;
		tempx = 0;
		tempy = 0;
		tempz = 0;
	}
	if (x == 0 && y == 0 && z == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

}
