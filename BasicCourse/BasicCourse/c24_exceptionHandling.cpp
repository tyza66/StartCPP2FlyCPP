#include <fstream>
#include <iostream>
using namespace std;

//自定义新异常
struct MyException : public exception
{
    const char* what() const throw ()
    {
        return "C++ Exception";
    }
};


double division(int a, int b)
{
    if (b == 0)
    {
        //抛出异常
        throw "Division by zero condition!";
    }
    return (a / b);
}

int main24() {
    int x = 50;
    int y = 0;
    double z = 0;

    try {
        z = division(x, y);
        cout << z << endl;
    }
    catch (const char* msg) {
        cerr << msg << endl;
    }

    try
    {
        throw MyException();
    }
    catch (MyException& e)
    {
        std::cout << "MyException caught" << std::endl;
        std::cout << e.what() << std::endl;
    }
    catch (std::exception& e)
    {
        //其他的错误
    }
    return 0;
}
