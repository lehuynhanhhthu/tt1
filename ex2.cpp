//Exercise 2
#include<iostream>
using namespace std;
int findK(int a[], int n, int k) {
	int last = a[n - 1];
	a[n - 1] = k;
	int i = 0;
	while ( a[i] != k) {
		i++;
	}
	a[n - 1] = last;
	if (i < n && a[i] == k) {
		return i;
	}
	return -1;
}
int main() {
	int n, k, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	cout << findK(a, n, k);
	return 0;
}