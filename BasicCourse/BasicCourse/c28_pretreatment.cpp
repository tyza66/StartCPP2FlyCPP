#include <iostream>
#include<string>

using namespace std;

//预处理就是那些宏定义语句
#define PI 3.14159

//还可以定义带有参数的宏
#define MIN(a,b) (a<b ? a : b)

//还可以进行条件编译
#ifdef NULL
	#define NULL 0
#endif

//可以定义#和##运算符
#define MKSTR( x ) #x  //就是内容直接替代
#define CONCAT( x, y ) x ## y //就是内容拼接替代



int main28() {
	cout << PI << endl;
	cout << MIN(3, 4) << endl;

	cout << MKSTR(HELLO C++) << endl;

	int xy = 96;
	cout << CONCAT(x, y) << endl;

	//系统还有几个预定义的宏
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;

	return 0;
}