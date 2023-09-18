#include <iostream>
using namespace std;

int main10() {
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;

	// 数学运算
	//取正弦值
	cout << "sin(d) :" << sin(d) << endl;
	//取绝对值
	cout << "abs(i)  :" << abs(i) << endl;
	//向下取整数
	cout << "floor(d) :" << floor(d) << endl;
	//开平方
	cout << "sqrt(f) :" << sqrt(f) << endl;
	//求n次方
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	//取随机数
	//首先需要设置随机数种子
	srand((unsigned)time(NULL));
	int j = rand();
	cout << "随机数： " << j << endl;
	return 0;
}