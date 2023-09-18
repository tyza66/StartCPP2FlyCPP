#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>
using namespace std;

//����ģ��
template <typename T>
inline T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}

//��ģ�� ��������ģ�����涨������Ͳ����ķ����ͳ�Ա
template <class T>
class Stack {
private:
    vector<T> elems;     // Ԫ�� 

public:
    void push(T const&);  // ��ջ
    void pop();               // ��ջ
    T top() const;            // ����ջ��Ԫ��
    bool empty() const {       // ���Ϊ���򷵻��档
        return elems.empty();
    }
};

//ʵ����ģ���ж���ĺ���
template <class T>
void Stack<T>::push(T const& elem)
{
    // ׷�Ӵ���Ԫ�صĸ���
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop()
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // ɾ�����һ��Ԫ��
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // �������һ��Ԫ�صĸ��� 
    return elems.back();
}

int main27()
{

    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;
    
    try {
        Stack<int>         intStack;  // int ���͵�ջ 
        Stack<string> stringStack;    // string ���͵�ջ 

        // ���� int ���͵�ջ 
        intStack.push(7);
        cout << intStack.top() << endl;

        // ���� string ���͵�ջ 
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex) {
        cerr << "Exception: " << ex.what() << endl;
        return -1;
    }


    return 0;
}