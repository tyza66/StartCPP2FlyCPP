#include <iostream>
using namespace std;

int main() {
	//各种编程语言都有变量的概念 主要为了存储数据的时候控制内存大小和规范数据的类型
	//C++中的变量必须先声明再使用
	//声明变量的时候必须指定变量的类型
	//变量的类型决定了变量的内存大小和能存储的数据类型

	//布尔型
	bool flag = true;
	//字符型
	char c = 'a';
	//整型
	int i = 1;
	//短整型
	short s = 2;
	//长整型
	long l = 3;
	//单精度浮点型
	float f = 1.1f;
	//双精度浮点型
	double d = 1.2;
	//宽字符型
	wchar_t wc = L'a'; //其实宽字符类型实际上就是short int（使用typedef short int wchar_t;声明的）
	//无符号整型
	unsigned int ui = 4;
	//无符号短整型
	unsigned short us = 5;
	//无符号长整型
	unsigned long ul = 6;
	//无符号字符型
	unsigned char uc = 'b';
	//无类型 void

	//我们可以使用siszeof()函数来查看变量的内存大小（字节数）
	//还可以使用numeric_limits<T>::min()和numeric_limits<T>::max()来查看变量的最小值和最大值
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
	cout << "\t最大值：" << (numeric_limits<char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
	cout << "\t最大值：" << (numeric_limits<long>::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
	cout << "\t最大值：" << (numeric_limits<long double>::max)();
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
	cout << "\t最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;


	//使用typedef来为类型取别名
	typedef int myint;
	myint myI = 1;

	//使用auto关键字来自动推导类型
	auto a = 1; //自动推导类型

	//使用decltype关键字来获取变量的类型
	decltype(a) b = 2; //获取a的类型并定义b

	//使用typeid关键字来获取变量的类型
	cout << "a的类型是" << typeid(a).name() << endl; //输出a的类型

	//枚举类型的作用是举出变量的值
	enum color { red, green = 3, blue };
	//枚举类型只能赋值自己定义了的值 c赋值为red
	color c1 = red; //现在c1的值是0
	color c2 = blue;//现在c2的值是4
	cout << "c1的值是" << c1 << endl;
	cout << "c2的值是" << c2 << endl;

	//c中的类型转换
	{
		//隐式转换
		int i = 1;
		double d = i; //隐式转换
		//显式转换
		double d2 = 3.14;
		int i2 = int(d2); //显式转换
	}

	//c++中的四种转换类型
	{
		//静态转换 用于比较相似的对象之间的抓住你换 静态转换不进行任何的运行时检查
		int i = 1;
		double d = static_cast<double>(i); //静态转换

		//动态转换 通常用于将一个基类指针或引用转换为派生类指针或引用 在运行时会进行类型检查
		//创建A类
		class A {
		public:
			virtual ~A() {}; //虚析构函数
		};
		//创建B类 继承A类
		class B : public A {};
		//定义了一个子类类型的指针指向父类类型的指针
		A* a = new B;
		B* b = dynamic_cast<B*>(a); //动态转换将父类指针转换回子类指针

		//常量转换 用于将const变量转换为非const
		const int i1 = 1;
		int j = const_cast<int&>(i1); //常量转换

		//重新选择转换 用于将一个数据类型的值重新解释为另一种数据类型的值 通常用在不同数据类型之间的转换
		double d1 = 3.14;
		long l = reinterpret_cast<long&>(d1); //重新选择转换
	}
	return 0;
}