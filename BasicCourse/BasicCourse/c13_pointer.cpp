#include <iostream>
using namespace std;

int main13() {
	int  var1;
	char var2[10];

	//&ȡ��ַ
	cout << "var1 �����ĵ�ַ�� ";
	cout << &var1 << endl;

	cout << "var2 �����ĵ�ַ�� ";
	cout << &var2 << endl;

	//*����ָ��
	int  var = 20;   // ʵ�ʱ���������
	int* ip;        // ָ�����������

	ip = &var;       // ��ָ������д洢 var �ĵ�ַ

	cout << "Value of var variable: ";
	cout << var << endl;

	// �����ָ������д洢�ĵ�ַ
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// ����ָ���е�ַ��ֵ ��ָ�����ǰ�����*���Ƿ���ָ���б����ֵ
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}