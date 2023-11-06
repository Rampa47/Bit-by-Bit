#include "Facade.h"


int main(){
	int tablesNo = ThreadSleep::generateRandomNumber(1,10);

    Facade facade(tablesNo);
    std::cout << "Press Enter to play." << std::endl;

    while (true) {
        char input = std::cin.get();

        if (input == '\n') {  
            int action =  ThreadSleep::generateRandomNumber(0, 1);
            if (action == 0) {
                facade.execute1();
            } else {
                facade.execute2();
            }
        }
    }


    return 0;
}