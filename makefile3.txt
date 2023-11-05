CXX = g++
CXXFLAGS = -std=c++11

SOURCES = OrderHandlingMain.cpp ChipSauce.cpp BeefBurger.cpp ChickenBurger.cpp PlainChips.cpp TomatoChipSauce.cpp JalapenoChipSauce.cpp GrilledPoultry.cpp FriedPoultry.cpp PoultryChef.cpp FryChef.cpp Chips.cpp Poultry.cpp BurgerChef.cpp HeadChef.cpp Order.cpp Burger.cpp ChefHandler.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = OrderHandlingMain.exe

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm *.o OrderHandlingMain.exe

run: $(EXECUTABLE)
	./$(EXECUTABLE)

.PHONY: all clean run