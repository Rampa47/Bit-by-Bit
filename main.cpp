#include "Facade.h"
#include <cstdlib>

int main(){
    srand((unsigned) time(NULL));
	int tablesNo = rand()%10;

    Facade facade(tablesNo);
    facade.execute();

    return 0;
}