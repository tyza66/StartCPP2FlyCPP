#include <iostream>
using namespace std;

int main() {
	//运算符

	//算术运算符
	int i = 1;
	int j = 2;
	cout << "+ " << i + j << endl;
	cout << "- " << i - j << endl;
	cout << "* " << i * j << endl;
	cout << "/ " << i / j << endl;
	cout << "% " << i % j << endl;
	cout << "i++ " << i++ << endl;
	cout << "i-- " << i-- << endl;
	cout << "++i " << ++i << endl;
	cout << "--i " << --i << endl;
	cout << endl;

	//关系运算符
	cout << "i>j " << (i > j) << endl;
	cout << "i<j " << (i < j) << endl;
	cout << "i>=j " << (i >= j) << endl;
	cout << "i<=j " << (i <= j) << endl;
	cout << "i==j " << (i == j) << endl;
	cout << "i!=j " << (i != j) << endl;
	cout << endl;

	//逻辑运算符
	bool b1 = true;
	bool b2 = false;
	cout << "b1||b2 " << (b1||b2) << endl;
	cout << "b1&&b2 " << (b1 && b2) << endl;
	cout << "!b1 " << (!b1) << endl;


	//位运算符

	//赋值运算符

	//其他运算符
	return 0;
}