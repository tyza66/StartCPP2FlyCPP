#include <iostream>
#include<string>

using namespace std;

//类中至少有一个函数被声明为纯虚函数，则这个类就是抽象类。纯虚函数是通过在声明中使用 "= 0" 来指定的
//有纯虚函数的类是抽象类，抽象类不能实例化对象

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

	//抽象类不能被实例化
	//Animal animal1;

	return 0;
}