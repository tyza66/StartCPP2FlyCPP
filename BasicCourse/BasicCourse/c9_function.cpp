#include <iostream>
using namespace std;

int test();
//����������Ĭ�ϲ���
int test(int a, int b = 10);

int main9() {
	cout << test() << endl;
	cout << test(1) << endl;
	//lambda���ʽ���庯��
	cout << ([](int a, int b) -> int { return a + b; })(1, 2) << endl;
	//û�з���ֵ��lambda���ʽ
	([]() { cout << "giao" << endl; })();
	return 0;
}

int test() {
	return 96;
}

int test(int a, int b) {
	return a + b;
}
