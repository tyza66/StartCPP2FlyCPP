#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main12() {
	//c风格的字符串
	char str11[] = "hello";
	char str22[] = "world";

	//c++中提供了很多操作字符串的操作

	char str1[13] = "runoob";
	char str2[13] = "google";
	char str3[13];

	// 复制 str1 到 str3
	//strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// 连接 str1 和 str2
	//strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// 连接后，str1 的总长度
	cout << "strlen(str1) : " << strlen(str1) << endl;

	string hello = "hello";
	string world = ",world";

	cout << hello + world << endl;

	cout << hello.size() << endl;

	return 0;
}