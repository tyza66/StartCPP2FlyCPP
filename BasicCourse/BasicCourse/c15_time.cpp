#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int main15() {
	// ���ڵ�ǰϵͳ�ĵ�ǰ����/ʱ��
	time_t now = time(0);

	// �� now ת��Ϊ�ַ�����ʽ
	char* dt = ctime(&now);

	cout << "�������ں�ʱ�䣺" << dt << endl;
	// �� now ת��Ϊ tm �ṹ
	tm* gmtm = gmtime(&now);

	dt = asctime(gmtm);
	cout << "UTC ���ں�ʱ�䣺" << dt << endl;


	//����tm��ʽ������ʱ��

	cout << "1970 ��Ŀǰ��������:" << now << endl;

	tm* ltm = localtime(&now);

	// ��� tm �ṹ�ĸ�����ɲ���
	cout << "��: " << 1900 + ltm->tm_year << endl;
	cout << "��: " << 1 + ltm->tm_mon << endl;
	cout << "��: " << ltm->tm_mday << endl;
	cout << "ʱ��: " << ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
	cout << ltm->tm_sec << endl;
	return 0;
}