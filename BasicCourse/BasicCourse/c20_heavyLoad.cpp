#include <iostream>
#include<string>

using namespace std;

class Test {
public:

	int num;
	void print(int a) {
		cout << "int a: " << a << endl;
	}
	void print(double a) {
		cout << "double a: " << a << endl;
	}
	void print(string a) {
		cout << "string a: " << a << endl;
	}
	//���������
	Test operator+(Test t) {
		Test temp;
		temp.num = this->num + t.num;
		return temp;
	}
	//�ܶೣ������������������� ����һЩ����������������
	Test operator-(Test t) {
		Test temp;
		temp.num = this->num - t.num;
		return temp;
	}
};

int main20() {
	//����
	Test t;
	t.num = 10;
	t.print(1);
	t.print(1.1);
	t.print("giao");

	Test t1;
	t1.num = 86;

	Test t2 = t + t1;
	cout << t2.num << endl;

	//��������ؾ���˵���������ж��嵱ǰ�����ʹ������������ʱ�����Ϊ��Ч��

	return 0;
}

