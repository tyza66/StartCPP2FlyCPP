#include <iostream>
#define PI 3.1415926

using namespace std;

int i = 0;

class MyClass {
public:
	static int v;
};

int MyClass::v = 96;

int main4() {
	//��ʱ��������������i��û�б����� ������ʾ�������涨���
	cout << i << endl;
	int i = 1;
	//�ڲ���i������ ����������ʾ�����ڲ���i
	cout << i << endl;
	{
		//ͬ��
		cout << i << endl;
		int i = 2;
		//ͬ��
		cout << i << endl;
	}

	//��������ָ�������ڲ������ı���
	cout << MyClass::v << endl;

	//��������
	const int a = 1;

	//������ֱ�������궨��
	cout << PI << endl;

	return 0;
}
