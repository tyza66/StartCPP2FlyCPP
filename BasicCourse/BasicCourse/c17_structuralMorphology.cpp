#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

// ����һ���ṹ������ Books 
struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

typedef struct Books2
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
} bbb;

int main17()
{
	Books Book1;        // ����ṹ������ Books �ı��� Book1
	Books Book2;        // ����ṹ������ Books �ı��� Book2

	// Book1 ����
	strcpy(Book1.title, "C++ �̳�");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "�������");
	Book1.book_id = 12345;

	// Book2 ����
	strcpy(Book2.title, "CSS �̳�");
	strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "ǰ�˼���");
	Book2.book_id = 12346;

	// ��� Book1 ��Ϣ
	cout << "��һ������� : " << Book1.title << endl;
	cout << "��һ�������� : " << Book1.author << endl;
	cout << "��һ������Ŀ : " << Book1.subject << endl;
	cout << "��һ���� ID : " << Book1.book_id << endl;

	//��������ʹ��.����ֵ
	// ��� Book2 ��Ϣ
	cout << "�ڶ�������� : " << Book2.title << endl;
	cout << "�ڶ��������� : " << Book2.author << endl;
	cout << "�ڶ�������Ŀ : " << Book2.subject << endl;
	cout << "�ڶ����� ID : " << Book2.book_id << endl;


	struct Books* book1 = &Book1;
	//ʹ��ָ����ʽṹ���ֵ
	cout << "��һ������� : " << book1->title << endl;
	cout << "��һ�������� : " << book1->author << endl;
	cout << "��һ������Ŀ : " << book1->subject << endl;
	cout << "��һ���� ID : " << book1->book_id << endl;

	//ʹ��typedef����ı������ʽṹ������
	bbb book3;
	strcpy(book3.title, "C++ �̳�");
	strcpy(book3.author, "Runoob");
	strcpy(book3.subject, "�������");
	book3.book_id = 12396;

	cout << "����������� : " << book3.title << endl;
	cout << "������������ : " << book3.author << endl;
	cout << "����������Ŀ : " << book3.subject << endl;
	cout << "�������� ID : " << book3.book_id << endl;
	return 0;
}