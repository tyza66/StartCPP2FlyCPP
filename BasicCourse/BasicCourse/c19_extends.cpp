#include <iostream>
#include<string>

using namespace std;

class Animal {

public:
	//��Ա����Ĭ�϶���˽�е�
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

//public�̳� �����д��Ĭ��Ϊprivate�̳�
//public ����ֱ�Ӽ̳�public�ĳ�Ա��protected�ĳ�ԱΪ��Ӧ�ĳ�Ա
//protected ����ֱ�Ӽ̳�public�ĳ�Ա��protected�ĳ�ԱΪprotected��Ա
//private ����ֱ�Ӽ̳�public�ĳ�Ա��protected�ĳ�ԱΪprivated��Ա
class Dog : public Animal {
public:
	//���췽���̳�
	Dog(string name) : Animal("dog", name) {
		name = name;
	}

	string getName() {
		//public��Ա�����������з���
		return name;
	}

	string getGiao1() {
		//protected��Ա�����������з���
		return giao1;
	}

	string getGiao2() {
		//Ҫ����˽�з�����Ҫ���ø��ࣨ���ࣩ�еķ�˽�з�����ӷ���
		return Animal::getGiao2();
	}
};

//һ������Լ̳ж���� ֻҪ��������ö��Ÿ�������

int main19() {
	Dog dog("dog1");
	cout << dog.type << endl;
	cout << dog.getName() << endl;
	cout << dog.getGiao1() << endl;
	cout << dog.getGiao2() << endl;
	return 0;
}

