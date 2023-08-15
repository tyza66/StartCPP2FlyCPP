#include <iostream>
using namespace std;

int main2() {
	//定义变量
	int x = 1;
	//用大括号包裹的是语句块
	{
		int x = 2;
		cout << x << endl;
	}

	//这种是单行注释
	/*
		这种是多行注释
	*/

	//返回值
	return 0;
}