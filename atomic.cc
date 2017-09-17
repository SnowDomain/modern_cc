#include <atomic>
#include <iostream>
#include <thread>

std::atomic<int> a{0};

void thread() { ++a; }

int main() {
    std::thread t1{thread};
    std::thread t2{thread};
    t1.join();
    t2.join();
    std::cout << a << std::endl;
    return 0;
}
