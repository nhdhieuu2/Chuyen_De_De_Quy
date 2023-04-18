#include<iostream>
using namespace std;
void Nhap(float[][50], int, int);
int TongChan(float[][50], int, int);
int main() {
	int m;
	cout << "Nhap m: ";
	cin >> m;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float a[50][50];
	Nhap(a, m, n);
	cout << "tong chan: " << TongChan(a, m, n);
	return 0;
}
void Nhap(float a[][50], int m, int n) {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}
int TongChan(float a[][50], int m, int n) {
	if (m == 0)
		return 0;
	int s = TongChan(a, m - 1, n);
	for (int i = 0; i < n; i++)
		if (a[m-1][i]>0)
			s = s + a[m - 1][i];
	return s;
}