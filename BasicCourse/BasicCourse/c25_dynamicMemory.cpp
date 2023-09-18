#include <fstream>
#include <iostream>
using namespace std;

int main25() {
	//虽然也可以使用malloc和free来进行内存的申请和释放，但是这种方式不是C++的标准方式
	//C++中使用new和delete来进行内存的申请和释放
	//new和delete是运算符，不是函数
	//首先创建一个指针
	double* pvalue = NULL; // 初始化为 null 的指针
	//如果创建失败（就是直接生成的时候发现没有可以分配的内存空间了），new报错
	if (!(pvalue = new double))
	{
		cout << "Error: out of memory." << endl;
		exit(1);

	}
	*pvalue = 29494.99;    // 在分配的地址存储值
	cout << "Value of pvalue : " << *pvalue << endl;

	//数组也可以使用new来创建
	int* parray = NULL;
	if (!(parray = new int[10]))
	{
		cout << "Error: out of memory." << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		parray[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << parray[i] << endl;
	}

	//释放内存
	delete[] parray;        // 删除 pvalue 所指向的内存

	delete pvalue;         // 释放数组内存


	//多维数组也可以通过new来开辟 只是指针的层数不一样
	int** array2;
	// 假定数组第一维长度为 m， 第二维长度为 n
	int m = 3, n = 3;
	// 动态分配空间
	array2 = new int* [m];
	for (int i = 0; i < m; i++)
	{
		array2[i] = new int[n];
	}
	//释放
	for (int i = 0; i < m; i++)
	{
		delete[] array2[i];
	}
	delete[] array2;


	return 0;
}