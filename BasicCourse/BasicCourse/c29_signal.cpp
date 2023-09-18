#include <iostream>
#include <csignal>
#include <windows.h>


using namespace std;

void signalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";

    // �����ر�
    // ��ֹ����  

    exit(signum);

}

int main29()
{
    // ע���ź� SIGINT ���źŴ������
    signal(SIGINT, signalHandler);

    while (1) {
        cout << "Going to sleep...." << endl;
        Sleep(100);

        //����ʹ�ú��� raise() �����źţ��ú�������һ�������źű����Ϊ����
        raise(SIGINT);
    }
    //Ҫ���͵��źŵı�ţ���Щ�źŰ�����SIGINT��SIGABRT��SIGFPE��SIGILL��SIGSEGV��SIGTERM��SIGHUP

    return 0;
}