#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main12() {
	//c�����ַ���
	char str11[] = "hello";
	char str22[] = "world";

	//c++���ṩ�˺ܶ�����ַ����Ĳ���

	char str1[13] = "runoob";
	char str2[13] = "google";
	char str3[13];

	// ���� str1 �� str3
	//strcpy(str3, str1);
	cout << "strcpy( str3, str1) : " << str3 << endl;

	// ���� str1 �� str2
	//strcat(str1, str2);
	cout << "strcat( str1, str2): " << str1 << endl;

	// ���Ӻ�str1 ���ܳ���
	cout << "strlen(str1) : " << strlen(str1) << endl;

	string hello = "hello";
	string world = ",world";

	cout << hello + world << endl;

	cout << hello.size() << endl;

	return 0;
}