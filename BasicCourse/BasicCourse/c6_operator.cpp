#include <iostream>
using namespace std;

int main6() {
	//�����

	//���������
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

	//��ϵ�����
	cout << "i>j " << (i > j) << endl;
	cout << "i<j " << (i < j) << endl;
	cout << "i>=j " << (i >= j) << endl;
	cout << "i<=j " << (i <= j) << endl;
	cout << "i==j " << (i == j) << endl;
	cout << "i!=j " << (i != j) << endl;
	cout << endl;

	//�߼������
	bool b1 = true;
	bool b2 = false;
	cout << "b1||b2 " << (b1||b2) << endl;
	cout << "b1&&b2 " << (b1 && b2) << endl;
	cout << "!b1 " << (!b1) << endl;


	//λ�����
	//&�� | �� ^ 
	//������
	int a = 1;
	int b = 0;
	cout << "a&b " << (a&b) << endl;
	//������
	cout << "a|b " << (a|b) << endl;
	//�������
	cout << "a^b " << (a^b) << endl;

	//��ֵ�����
	// = += -= *= /= %= &= |= ^= <<= >>=
	int c = 1;
	c += 1;
	cout << "c+=1 " << c << endl;
	//�����൱��ʹ�õ��ں�ǰ���������͵��ںź����ֵ��������
	//����ľ��� <<= >>= �����ƶ�һλ ���Ƕ����ƴ�������������ƶ�һλ
 
	//���������
	//sizeof() ���������������ͻ��߱����ĳ���
	cout << "sizeof(int) " << sizeof(int) << endl;

	//��Ԫ�����
	//���ʽ1 ? ���ʽ2 : ���ʽ3
	//������ʽ1Ϊ�棬��ִ�б��ʽ2������ִ�б��ʽ3

	//�����������˳��ִ��һϵ�����㡣�������ű��ʽ��ֵ���Զ��ŷָ����б��е����һ�����ʽ��ֵ
	
	//��ͼ�ͷ�ǳ�Ա��������������ࡢ�ṹ�͹�����ĳ�Ա

	//����ǿ��ת�������

	//&���ر�����ַ

	//*ָ��һ������
	return 0;
}