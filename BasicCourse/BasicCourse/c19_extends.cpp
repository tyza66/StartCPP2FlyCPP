#include <iostream>
#include<string>

using namespace std;

class Animal {

public:
	//成员变量默认都是私有的
	string type;
	string name;

	Animal(string type, string name) {
		this->type = type;
		this->name = name;
	}

	string getGiao2() {
		return giao2;
	}
protected:
	string giao1 = "giao1";

private:
	string giao2 = "giao2";
};

//public继承 如果不写，默认为private继承
//public 就是直接继承public的成员和protected的成员为对应的成员
//protected 就是直接继承public的成员和protected的成员为protected成员
//private 就是直接继承public的成员和protected的成员为privated成员
class Dog : public Animal {
public:
	//构造方法继承
	Dog(string name) : Animal("dog", name) {
		name = name;
	}

	string getName() {
		//public成员可以在子类中访问
		return name;
	}

	string getGiao1() {
		//protected成员可以在子类中访问
		return giao1;
	}

	string getGiao2() {
		//要访问私有方法需要调用父类（基类）中的非私有方法间接访问
		return Animal::getGiao2();
	}
};

//一个类可以继承多个类 只要将多个类用逗号隔开即可

int main19() {
	Dog dog("dog1");
	cout << dog.type << endl;
	cout << dog.getName() << endl;
	cout << dog.getGiao1() << endl;
	cout << dog.getGiao2() << endl;
	return 0;
}

