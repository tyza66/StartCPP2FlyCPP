#include <iostream>
using namespace std;

int main6() {
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
	//&、 | 和 ^ 
	//与运算
	int a = 1;
	int b = 0;
	cout << "a&b " << (a&b) << endl;
	//或运算
	cout << "a|b " << (a|b) << endl;
	//异或运算
	cout << "a^b " << (a^b) << endl;

	//赋值运算符
	// = += -= *= /= %= &= |= ^= <<= >>=
	int c = 1;
	c += 1;
	cout << "c+=1 " << c << endl;
	//就是相当于使用等于号前面的运算符和等于号后面的值进行运算
	//特殊的就是 <<= >>= 左右移动一位 就是二进制代码向左或向右移动一位
 
	//其他运算符
	//sizeof() 用来计算数据类型或者变量的长度
	cout << "sizeof(int) " << sizeof(int) << endl;

	//三元运算符
	//表达式1 ? 表达式2 : 表达式3
	//如果表达式1为真，则执行表达式2，否则执行表达式3

	//逗号运算符会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值
	
	//点和箭头是成员运算符用于引用类、结构和共用体的成员

	//类型强制转换运算符

	//&返回变量地址

	//*指向一个变量
	return 0;
}