#include <iostream>
#include<string>

using namespace std;

//����������һ������������Ϊ���麯�������������ǳ����ࡣ���麯����ͨ����������ʹ�� "= 0" ��ָ����
//�д��麯�������ǳ����࣬�����಻��ʵ��������

class Animal {
public:
	virtual void say() = 0;
};

class Dog : public Animal {
public:
	void say() {
		cout << "Dog say" << endl;
	}
};

int main22() {
	Animal* animal;
	Dog dog;

	animal = &dog;
	animal->say();

	dog.say();

	//�����಻�ܱ�ʵ����
	//Animal animal1;

	return 0;
}