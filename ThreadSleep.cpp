#include "ThreadSleep.h"
#include "Facade.h"

Facade* ThreadSleep::facade = nullptr;

void ThreadSleep::threadSleep() {
    int time = ThreadSleep::generateRandomNumber(1000, 4000);
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

void ThreadSleep::threadSleep(int n) {
    int time = ThreadSleep::generateRandomNumber(100, n);
    std::this_thread::sleep_for(std::chrono::milliseconds(time));
}

int ThreadSleep::generateRandomNumber(int min, int max) {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

void ThreadSleep::execute(Facade &f) {
    facade = &f;
    int action = ThreadSleep::generateRandomNumber(0, 1);
    if (action == 0) {
        f.execute1();
    } else {
        f.execute2();
    }
}

void ThreadSleep::execute() {
    if (facade == nullptr) return;
    int action = ThreadSleep::generateRandomNumber(0, 1);
    if (action == 0) {
        facade->execute1();
    } else {
        facade->execute2();
    }
}
