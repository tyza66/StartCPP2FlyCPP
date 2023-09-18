#include <iostream>
// 必须的头文件
#include <thread>

std::thread::id main_thread_id = std::this_thread::get_id();

void hello()
{
    std::cout << "Hello Concurrent World\n";
    if (main_thread_id == std::this_thread::get_id())
        std::cout << "This is the main thread.\n";
    else
        std::cout << "This is not the main thread.\n";
}

//暂停线程
void pause_thread(int n) {
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout << "pause of " << n << " seconds ended\n";
}

int main30() {
    hello();
    //创建线程 直接传入要执行的方法 这里先创建一个线程执行hello方法
    std::thread t(hello);

    std::cout << t.hardware_concurrency() << std::endl;//可以并发执行多少个(不准确)
    std::cout << "native_handle " << t.native_handle() << std::endl;//可以并发执行多少个(不准确)

    t.join();//等待线程执行完毕 一个线程只能join一次 join的时候主线程会阻塞
    std::thread a(hello); //再新建一个线程执行hello方法
    a.detach();//分离线程 detach的时候主线程不会阻塞

    std::thread threads[5];                         // 默认构造线程
    std::cout << "生成 5 个线程...\n";
    for (int i = 0; i < 5; ++i)
        threads[i] = std::thread(pause_thread, i + 1);   // move-assign threads 第一个参数是要执行的方法，后面的是参数
    std::cout << "生成 Now waiting for them to join:\n";
    for (auto& thread : threads)
        thread.join();
    std::cout << "All threads joined!\n";

    return 0;
}

