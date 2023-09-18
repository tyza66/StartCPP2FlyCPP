#include <iostream>
using namespace std;

int test();
//给函数设置默认参数
int test(int a, int b = 10);

int main9() {
	cout << test() << endl;
	cout << test(1) << endl;
	//lambda表达式定义函数
	cout << ([](int a, int b) -> int { return a + b; })(1, 2) << endl;
	//没有返回值的lambda表达式
	([]() { cout << "giao" << endl; })();
	return 0;
}

int test() {
	return 96;
}

int test(int a, int b) {
	return a + b;
}
