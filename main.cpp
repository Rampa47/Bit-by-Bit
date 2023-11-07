#include "Facade.h"


int main(){
	int tablesNo = ThreadSleep::generateRandomNumber(5,15);

    Facade facade(tablesNo);
    std::cout << "Press Enter to play." << std::endl;

    while (true) {
        char input = std::cin.get();
        if (input == ' ') {  
            break;
        }
        if (input == '\n') {  
            int action =  ThreadSleep::generateRandomNumber(0, 1);
            if (action == 0) {
                facade.execute1();
            } else {
                facade.execute2();
            }
        }
        std::cout << "Press Enter to continue. Press backspace to exit " << std::endl;
    }


    return 0;
}
