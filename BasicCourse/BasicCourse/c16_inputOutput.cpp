#include <iostream>
using namespace std;

int main16() {

	//cin cout
	int i;
	cin >> i;
	cout << "您输入的是" << i << endl;

	//cerr clog
	//cerr用于输出错误信息，通常用于输出程序运行时的错误信息
	//clog用于输出程序运行时的一般性信息
	cerr << "error" << endl;
	clog << "log" << endl;

	return 0;
}