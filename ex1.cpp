//Exercise 1
#include<iostream>
using namespace std;
int findK(int a[], int n, int k) {
	{
		for (int i = 0; i < n; i++) {
			if (a[i] == k) {
				return i;
			}
		}
		return -1;
	}
}
int main() {
	int k;
	int a[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	cout << findK(a, n, k);
	return 0;

}