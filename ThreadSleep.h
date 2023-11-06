#ifndef THREADSLEEP_H
#define THREADSLEEP_H

#include <iostream>
#include <thread>
#include <chrono>

#include <ctime>
#include <random>
class Facade;

class ThreadSleep {
public:
    static void threadSleep();
    static void threadSleep(int n);

    static int generateRandomNumber(int min, int max);
    static Facade* facade;
    static void execute(Facade &f);
    static void execute();
    
};

#endif
