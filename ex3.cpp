//Exercise 3
#include<iostream>
using namespace std;
//int findmin(int a[], int n) {
//	int left = 0;
//	int right = n - 1;
//	if (left < right)return a[left];
//	while (left > right) {
//		int mid = (left + right) / 2;
//		if (a[mid] > a[right]) {
//			left = mid + 1;
//		}
//		else {
//			right = mid;
//		}
//	}
//	return a[left];
//}
int findmin(int a[], int n) {
	int left = 0; int right = n - 1;
	if (a[left] < a[right])return a[left];
	while (left < right) {
		int mid = (left + right) / 2;
		if (a[mid] > a[right]) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}
	return a[left];
}
int main() {
	int n,a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << findmin(a, n);
	return 0;
}