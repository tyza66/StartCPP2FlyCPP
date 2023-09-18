#include <iostream>
using namespace std;

int main8() {
	//if语句 用来判断条件是否成立
	int i = 1;
	if (i >= 0) {
		cout << "i>=0" << endl;
	}
	else {
		cout << "i<0" << endl;
	}

	//if else if else

	if (i > 0) {
		cout << "i>0" << endl;
	}
	else if (i == 0) {
		cout << "i=0" << endl;
	}
	else {
		cout << "i<0" << endl;
	}

	//switch case
	switch (i) {
		case 0:
			cout << "i=0" << endl;
			break;
		case 1:
			cout << "i=1" << endl;
			break;
		default:
			cout << "i!=0&&i!=1" << endl;
			break;
		}

	//三目运算符
	int j = 1;
	int k = 2;
	int max = j > k ? j : k;
	cout << "max " << max << endl;


	return 0;
}