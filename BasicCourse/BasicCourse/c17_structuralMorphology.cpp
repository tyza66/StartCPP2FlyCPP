#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

// 声明一个结构体类型 Books 
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
	Books Book1;        // 定义结构体类型 Books 的变量 Book1
	Books Book2;        // 定义结构体类型 Books 的变量 Book2

	// Book1 详述
	strcpy(Book1.title, "C++ 教程");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "编程语言");
	Book1.book_id = 12345;

	// Book2 详述
	strcpy(Book2.title, "CSS 教程");
	strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "前端技术");
	Book2.book_id = 12346;

	// 输出 Book1 信息
	cout << "第一本书标题 : " << Book1.title << endl;
	cout << "第一本书作者 : " << Book1.author << endl;
	cout << "第一本书类目 : " << Book1.subject << endl;
	cout << "第一本书 ID : " << Book1.book_id << endl;

	//正常可以使用.访问值
	// 输出 Book2 信息
	cout << "第二本书标题 : " << Book2.title << endl;
	cout << "第二本书作者 : " << Book2.author << endl;
	cout << "第二本书类目 : " << Book2.subject << endl;
	cout << "第二本书 ID : " << Book2.book_id << endl;


	struct Books* book1 = &Book1;
	//使用指针访问结构体的值
	cout << "第一本书标题 : " << book1->title << endl;
	cout << "第一本书作者 : " << book1->author << endl;
	cout << "第一本书类目 : " << book1->subject << endl;
	cout << "第一本书 ID : " << book1->book_id << endl;

	//使用typedef定义的别名访问结构体类型
	bbb book3;
	strcpy(book3.title, "C++ 教程");
	strcpy(book3.author, "Runoob");
	strcpy(book3.subject, "编程语言");
	book3.book_id = 12396;

	cout << "第三本书标题 : " << book3.title << endl;
	cout << "第三本书作者 : " << book3.author << endl;
	cout << "第三本书类目 : " << book3.subject << endl;
	cout << "第三本书 ID : " << book3.book_id << endl;
	return 0;
}