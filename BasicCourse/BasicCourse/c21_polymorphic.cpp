#include <iostream>
#include<string>

using namespace std;

//多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数

class Animal {
public:
	//virtual关键字用于声明一个函数为虚函数
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

	//如果在父类中将say方法声明为virtual，那么在调用时会根据对象的类型来执行不同的函数
	//如果没有，那么会根据指针的类型来执行函数
	animal = &dog;
	animal->say();
	animal = &cat;
	animal->say();

	return 0;
}