#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;

int main11() {
	int a[4] = { 2,3,4,5 };

	int b[4] = { 0 };

	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < end(a) - begin(a); i++) {
		cout << setw(7) << i << setw(13) << a[i] << endl;
	}
	cout << endl;

	cout << "Element" << setw(13) << "Value" << endl;
	for (int i = 0; i < end(b) - begin(b); i++) {
		cout << setw(7) << i << setw(13) << b[i] << endl;
	}

	return 0;
}