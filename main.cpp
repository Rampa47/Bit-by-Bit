#include "Facade.h"


int main(){
    Facade facade;
    std::cout << "Press Enter to play." << std::endl;

    while (true) {
        char input = std::cin.get();

        if (input == '\n') {  
            ThreadSleep::execute(facade);
            std::cout << "Press Enter to continue." << std::endl;
        }
    }


    return 0;
}