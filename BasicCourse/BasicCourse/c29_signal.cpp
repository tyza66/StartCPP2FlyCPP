#include <iostream>
#include <csignal>
#include <windows.h>


using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // 清理并关闭
    // 终止程序  

    exit(signum);

}

int main29()
{
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);

    while (1) {
        cout << "Going to sleep...." << endl;
        Sleep(100);

        //可以使用函数 raise() 生成信号，该函数带有一个整数信号编号作为参数
        raise(SIGINT);
    }
    //要发送的信号的编号，这些信号包括：SIGINT、SIGABRT、SIGFPE、SIGILL、SIGSEGV、SIGTERM、SIGHUP

    return 0;
}