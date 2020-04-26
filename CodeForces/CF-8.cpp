Author :Harsh Jain
Problem Link:https://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif*/
	string c, ip;
	cin >> ip;
	c = toupper(ip[0]);
	c.append(ip.substr(1, ip.length()));
	cout << c;
}
