#include <iostream>
#include<string>

using namespace std;

//Ԥ���������Щ�궨�����
#define PI 3.14159

//�����Զ�����в����ĺ�
#define MIN(a,b) (a<b ? a : b)

//�����Խ�����������
#ifdef NULL
	#define NULL 0
#endif

//���Զ���#��##�����
#define MKSTR( x ) #x  //��������ֱ�����
#define CONCAT( x, y ) x ## y //��������ƴ�����



int main28() {
	cout << PI << endl;
	cout << MIN(3, 4) << endl;

	cout << MKSTR(HELLO C++) << endl;

	int xy = 96;
	cout << CONCAT(x, y) << endl;

	//ϵͳ���м���Ԥ����ĺ�
	cout << "Value of __LINE__ : " << __LINE__ << endl;
	cout << "Value of __FILE__ : " << __FILE__ << endl;
	cout << "Value of __DATE__ : " << __DATE__ << endl;
	cout << "Value of __TIME__ : " << __TIME__ << endl;

	return 0;
}