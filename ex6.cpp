//Exercise 6
#include<iostream>
using namespace std;
void checksum(int a[], int n, int k) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[0];
		for (int j = i + 1; j < n; j++) {
			sum += a[j];
			if (sum == k) {
				cout << "YES";
				return;
			}
			else sum -= a[j];
		}
	}

	cout << "NO";
}
int main() {
	int n, k, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	checksum(a, n, k);
	return 0;
}