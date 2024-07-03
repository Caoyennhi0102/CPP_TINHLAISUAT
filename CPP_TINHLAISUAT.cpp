#include<iostream>
#include <conio.h>
using namespace std;
int main() {
	double sotien, lai, laisuat = 00.8;
	cout << "Nhap So Tien: ";
	cin >> sotien;
	for (int i = 1; i <= 10; i++) {
		lai = laisuat * sotien;
		cout << "nam: " << i << "von: " << sotien << "lai: " << lai << endl;
		sotien = sotien + lai;

	}
	return 0;
}