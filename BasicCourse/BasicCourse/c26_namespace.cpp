#include <fstream>
#include <iostream>
using namespace std;


// ��һ�������ռ�
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// �ڶ��������ռ�
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

//������using namespaceָ����д��ʱ��Ĭ��ʹ���ĸ������ռ�
using namespace first_space;


//Ҳ������usingָ��ʹ��ĳ�������ռ��е�ĳ������using std::cout;

//���������ռ���Բ��������� �����ں���ʹ��һ���������ռ����ƾͿ�����

//�����ռ����Ƕ�� �����ڲ�������ռ�Ļ�ֱ��ʹ��::�Ϳ�����

int main26()
{

    // ���õ�һ�������ռ��еĺ���
    first_space::func();

    // ���õڶ��������ռ��еĺ���
    second_space::func();
    
    func();
    return 0;
}