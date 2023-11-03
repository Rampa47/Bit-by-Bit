CXX = g++
CXXFLAGS = -std=c++11 -g  # Including the -g flag for debugging information

SOURCES = OrderHandlingMain.cpp ChipSauce.cpp BeefBurger.cpp ChickenBurger.cpp PlainChips.cpp TomatoChipSauce.cpp JalapenoChipSauce.cpp GrilledPoultry.cpp FriedPoultry.cpp Poultry.cpp Order.cpp Burger.cpp OrderContext.cpp InProgress.cpp Raw.cpp Done.cpp PoultryChef.cpp FryChef.cpp Chips.cpp BurgerChef.cpp HeadChef.cpp ChefHandler.cpp

# Generate object file paths within the obj/ directory
OBJECTS = $(SOURCES:%.cpp=obj/%.o)

EXECUTABLE = test/OrderHandlingMain

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJECTS)

# Rule to compile individual source files into object files
obj/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f obj/*.o $(EXECUTABLE)

run: $(EXECUTABLE)
	./$(EXECUTABLE)

.PHONY: all clean run

