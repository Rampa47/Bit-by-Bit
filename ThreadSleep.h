#ifndef THREADSLEEP_H
#define THREADSLEEP_H

#include <iostream>
#include <thread>
#include <chrono>

#include <ctime>
#include <random>

class ThreadSleep 
{
    public:
        static void threadSleep() {
            int time = ThreadSleep::generateRandomNumber(1000, 4000);
            std::this_thread::sleep_for(std::chrono::milliseconds(time));
        }
        static void threadSleep(int n) {
            int time = ThreadSleep::generateRandomNumber(100, n);
            std::this_thread::sleep_for(std::chrono::milliseconds(time));
        }

        static int generateRandomNumber(int min, int max) {
            std::random_device rd;  
            std::mt19937 gen(rd()); 

            std::uniform_int_distribution<> dis(min, max);

            return dis(gen);
    }
};

#endif
