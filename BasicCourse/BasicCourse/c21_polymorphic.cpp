#include <iostream>
#include<string>

using namespace std;

//��̬��ζ�ŵ��ó�Ա����ʱ������ݵ��ú����Ķ����������ִ�в�ͬ�ĺ���

class Animal {
public:
	//virtual�ؼ�����������һ������Ϊ�麯��
	virtual void say() {
		cout << "Animal say" << endl;
	}
};

class Dog : public Animal {
public:
	void say() {
		cout << "Dog say" << endl;
	}
};

class Cat : public Animal {
public:
	void say() {
		cout << "Cat say" << endl;
	}
};

int main21() {
	Animal *animal;
	Dog dog;
	Cat cat;

	//����ڸ����н�say��������Ϊvirtual����ô�ڵ���ʱ����ݶ����������ִ�в�ͬ�ĺ���
	//���û�У���ô�����ָ���������ִ�к���
	animal = &dog;
	animal->say();
	animal = &cat;
	animal->say();

	return 0;
}