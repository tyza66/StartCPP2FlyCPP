#include <fstream>
#include <iostream>
using namespace std;


// 第一个命名空间
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}
// 第二个命名空间
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

//可以用using namespace指定不写的时候默认使用哪个命名空间
using namespace first_space;


//也可以用using指定使用某个命名空间中的某个函数using std::cout;

//并且命名空间可以不连续定义 就是在后面使用一样的命名空间名称就可以了

//命名空间可以嵌套 进入内层的命名空间的话直接使用::就可以了

int main26()
{

    // 调用第一个命名空间中的函数
    first_space::func();

    // 调用第二个命名空间中的函数
    second_space::func();
    
    func();
    return 0;
}