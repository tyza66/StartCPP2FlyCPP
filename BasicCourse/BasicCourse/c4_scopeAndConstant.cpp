#include <iostream>
#define PI 3.1415926

using namespace std;

int i = 0;

class MyClass {
public:
	static int v;
};

int MyClass::v = 96;

int main4() {
	//这时这个大括号里面的i还没有被定义 所以显示的是外面定义的
	cout << i << endl;
	int i = 1;
	//内部的i定义了 所以这里显示的是内部的i
	cout << i << endl;
	{
		//同理
		cout << i << endl;
		int i = 2;
		//同理
		cout << i << endl;
	}

	//类作用域指的是类内部声明的变量
	cout << MyClass::v << endl;

	//声明常量
	const int a = 1;

	//还可以直接声明宏定义
	cout << PI << endl;

	return 0;
}
