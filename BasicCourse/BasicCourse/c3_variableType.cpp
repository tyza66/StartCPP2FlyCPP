#include <iostream>
using namespace std;

int main() {
	//���ֱ�����Զ��б����ĸ��� ��ҪΪ�˴洢���ݵ�ʱ������ڴ��С�͹淶���ݵ�����
	//C++�еı���������������ʹ��
	//����������ʱ�����ָ������������
	//���������;����˱������ڴ��С���ܴ洢����������

	//������
	bool flag = true;
	//�ַ���
	char c = 'a';
	//����
	int i = 1;
	//������
	short s = 2;
	//������
	long l = 3;
	//�����ȸ�����
	float f = 1.1f;
	//˫���ȸ�����
	double d = 1.2;
	//���ַ���
	wchar_t wc = L'a'; //��ʵ���ַ�����ʵ���Ͼ���short int��ʹ��typedef short int wchar_t;�����ģ�
	//�޷�������
	unsigned int ui = 4;
	//�޷��Ŷ�����
	unsigned short us = 5;
	//�޷��ų�����
	unsigned long ul = 6;
	//�޷����ַ���
	unsigned char uc = 'b';
	//������ void

	//���ǿ���ʹ��siszeof()�������鿴�������ڴ��С���ֽ�����
	//������ʹ��numeric_limits<T>::min()��numeric_limits<T>::max()���鿴��������Сֵ�����ֵ
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "��ռ�ֽ�����" << sizeof(bool);
	cout << "\t���ֵ��" << (numeric_limits<bool>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "��ռ�ֽ�����" << sizeof(char);
	cout << "\t���ֵ��" << (numeric_limits<char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "��ռ�ֽ�����" << sizeof(signed char);
	cout << "\t���ֵ��" << (numeric_limits<signed char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "��ռ�ֽ�����" << sizeof(unsigned char);
	cout << "\t���ֵ��" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "��ռ�ֽ�����" << sizeof(wchar_t);
	cout << "\t���ֵ��" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "��ռ�ֽ�����" << sizeof(short);
	cout << "\t���ֵ��" << (numeric_limits<short>::max)();
	cout << "\t\t��Сֵ��" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "��ռ�ֽ�����" << sizeof(int);
	cout << "\t���ֵ��" << (numeric_limits<int>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "��ռ�ֽ�����" << sizeof(unsigned);
	cout << "\t���ֵ��" << (numeric_limits<unsigned>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "��ռ�ֽ�����" << sizeof(long);
	cout << "\t���ֵ��" << (numeric_limits<long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "��ռ�ֽ�����" << sizeof(unsigned long);
	cout << "\t���ֵ��" << (numeric_limits<unsigned long>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "��ռ�ֽ�����" << sizeof(double);
	cout << "\t���ֵ��" << (numeric_limits<double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "��ռ�ֽ�����" << sizeof(long double);
	cout << "\t���ֵ��" << (numeric_limits<long double>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "��ռ�ֽ�����" << sizeof(float);
	cout << "\t���ֵ��" << (numeric_limits<float>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "��ռ�ֽ�����" << sizeof(size_t);
	cout << "\t���ֵ��" << (numeric_limits<size_t>::max)();
	cout << "\t��Сֵ��" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "��ռ�ֽ�����" << sizeof(string) << endl;
	// << "\t���ֵ��" << (numeric_limits<string>::max)() << "\t��Сֵ��" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;


	//ʹ��typedef��Ϊ����ȡ����
	typedef int myint;
	myint myI = 1;

	//ʹ��auto�ؼ������Զ��Ƶ�����
	auto a = 1; //�Զ��Ƶ�����

	//ʹ��decltype�ؼ�������ȡ����������
	decltype(a) b = 2; //��ȡa�����Ͳ�����b

	//ʹ��typeid�ؼ�������ȡ����������
	cout << "a��������" << typeid(a).name() << endl; //���a������

	//ö�����͵������Ǿٳ�������ֵ
	enum color { red, green = 3, blue };
	//ö������ֻ�ܸ�ֵ�Լ������˵�ֵ c��ֵΪred
	color c1 = red; //����c1��ֵ��0
	color c2 = blue;//����c2��ֵ��4
	cout << "c1��ֵ��" << c1 << endl;
	cout << "c2��ֵ��" << c2 << endl;

	//c�е�����ת��
	{
		//��ʽת��
		int i = 1;
		double d = i; //��ʽת��
		//��ʽת��
		double d2 = 3.14;
		int i2 = int(d2); //��ʽת��
	}

	//c++�е�����ת������
	{
		//��̬ת�� ���ڱȽ����ƵĶ���֮���ץס�㻻 ��̬ת���������κε�����ʱ���
		int i = 1;
		double d = static_cast<double>(i); //��̬ת��

		//��̬ת�� ͨ�����ڽ�һ������ָ�������ת��Ϊ������ָ������� ������ʱ��������ͼ��
		//����A��
		class A {
		public:
			virtual ~A() {}; //����������
		};
		//����B�� �̳�A��
		class B : public A {};
		//������һ���������͵�ָ��ָ�������͵�ָ��
		A* a = new B;
		B* b = dynamic_cast<B*>(a); //��̬ת��������ָ��ת��������ָ��

		//����ת�� ���ڽ�const����ת��Ϊ��const
		const int i1 = 1;
		int j = const_cast<int&>(i1); //����ת��

		//����ѡ��ת�� ���ڽ�һ���������͵�ֵ���½���Ϊ��һ���������͵�ֵ ͨ�����ڲ�ͬ��������֮���ת��
		double d1 = 3.14;
		long l = reinterpret_cast<long&>(d1); //����ѡ��ת��
	}
	return 0;
}