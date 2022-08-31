#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	int i, j, d, di, dj, m, n;
	int** arr;

	cout << "Nhap 2 so nguyen m, n: "; cin >> m >> n;
	//Cap phat bo nho cho mang arr
	arr = new int* [m];
	for (i = 0; i < m; i++)
		arr[i] = new int[n];
	//Tinh toan ma tran xoan oc
	d = 1; i = 0; j = 0; di = 0; dj = 0;
	while (d <= m * n) {
		for (j = dj; j < n - dj - 1 && d <= m * n; j++) { arr[i][j] = d; d++; }
		for (i = di; i < m - di - 1 && d <= m * n; i++) { arr[i][j] = d; d++; }
		for (j = n - dj - 1; j > dj && d <= m * n; j--) { arr[i][j] = d; d++; }
		for (i = m - di - 1; i > di && d <= m * n; i--) { arr[i][j] = d; d++; }
		di++; dj++; i++;
	}
	//Xuat ma tran xoan oc
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) cout << setw(3) << arr[i][j];
		cout << endl;
	}
	return 0;
}