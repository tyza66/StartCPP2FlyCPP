#include <fstream>
#include <iostream>
using namespace std;

int main25() {
	//��ȻҲ����ʹ��malloc��free�������ڴ��������ͷţ��������ַ�ʽ����C++�ı�׼��ʽ
	//C++��ʹ��new��delete�������ڴ��������ͷ�
	//new��delete������������Ǻ���
	//���ȴ���һ��ָ��
	double* pvalue = NULL; // ��ʼ��Ϊ null ��ָ��
	//�������ʧ�ܣ�����ֱ�����ɵ�ʱ����û�п��Է�����ڴ�ռ��ˣ���new����
	if (!(pvalue = new double))
	{
		cout << "Error: out of memory." << endl;
		exit(1);

	}
	*pvalue = 29494.99;    // �ڷ���ĵ�ַ�洢ֵ
	cout << "Value of pvalue : " << *pvalue << endl;

	//����Ҳ����ʹ��new������
	int* parray = NULL;
	if (!(parray = new int[10]))
	{
		cout << "Error: out of memory." << endl;
		exit(1);
	}
	for (int i = 0; i < 10; i++) {
		parray[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << parray[i] << endl;
	}

	//�ͷ��ڴ�
	delete[] parray;        // ɾ�� pvalue ��ָ����ڴ�

	delete pvalue;         // �ͷ������ڴ�


	//��ά����Ҳ����ͨ��new������ ֻ��ָ��Ĳ�����һ��
	int** array2;
	// �ٶ������һά����Ϊ m�� �ڶ�ά����Ϊ n
	int m = 3, n = 3;
	// ��̬����ռ�
	array2 = new int* [m];
	for (int i = 0; i < m; i++)
	{
		array2[i] = new int[n];
	}
	//�ͷ�
	for (int i = 0; i < m; i++)
	{
		delete[] array2[i];
	}
	delete[] array2;


	return 0;
}