#include <iostream>
#include<string>

using namespace std;

class Test {
public:

	int num;
	void print(int a) {
		cout << "int a: " << a << endl;
	}
	void print(double a) {
		cout << "double a: " << a << endl;
	}
	void print(string a) {
		cout << "string a: " << a << endl;
	}
	//运算符重载
	Test operator+(Test t) {
		Test temp;
		temp.num = this->num + t.num;
		return temp;
	}
	//很多常见的运算符都可以重载 除了一些特殊意义的运算符号
	Test operator-(Test t) {
		Test temp;
		temp.num = this->num - t.num;
		return temp;
	}
};

int main20() {
	//重载
	Test t;
	t.num = 10;
	t.print(1);
	t.print(1.1);
	t.print("giao");

	Test t1;
	t1.num = 86;

	Test t2 = t + t1;
	cout << t2.num << endl;

	//运算符重载就是说可以在类中定义当前类对象使用运算符运算的时候的行为和效果

	return 0;
}

