#include <iostream>
using namespace std;

int main10() {
	short  s = 10;
	int    i = -1000;
	long   l = 100000;
	float  f = 230.47;
	double d = 200.374;

	// ��ѧ����
	//ȡ����ֵ
	cout << "sin(d) :" << sin(d) << endl;
	//ȡ����ֵ
	cout << "abs(i)  :" << abs(i) << endl;
	//����ȡ����
	cout << "floor(d) :" << floor(d) << endl;
	//��ƽ��
	cout << "sqrt(f) :" << sqrt(f) << endl;
	//��n�η�
	cout << "pow( d, 2) :" << pow(d, 2) << endl;

	//ȡ�����
	//������Ҫ�������������
	srand((unsigned)time(NULL));
	int j = rand();
	cout << "������� " << j << endl;
	return 0;
}